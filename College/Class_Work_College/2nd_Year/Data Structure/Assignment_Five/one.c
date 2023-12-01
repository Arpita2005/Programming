#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new BST node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;   
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node *insertNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }

    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }

    return root;
}

// Function to perform a preorder traversal
void preorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Function to perform an inorder traversal
void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function to perform a postorder traversal
void postorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Function to search for a node in the BST
struct Node *searchNode(struct Node *root, int data)
{
    if (root == NULL || root->data == data)
    {
        return root;
    }

    if (data < root->data)
    {
        return searchNode(root->left, data);
    }

    return searchNode(root->right, data);
}

// Function to find the minimum value node in a BST
struct Node *findMinNode(struct Node *node)
{
    struct Node *current = node;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

// Function to delete a node from the BST
struct Node *deleteNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }

    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        // Node with only one child or no child
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: get the inorder successor (smallest in the right subtree)
        struct Node *temp = findMinNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    struct Node *root = NULL;

    while (1)
    {
        printf("1. Insert 2. Preorder 3. Inorder 4. Postorder 5. Search 6. Delete 7. Exit\n");
        int choice, data;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            root = insertNode(root, data);
            break;
        case 2:
            printf("Preorder Traversal: ");
            preorderTraversal(root);
            printf("\n");
            break;
        case 3:
            printf("Inorder Traversal: ");
            inorderTraversal(root);
            printf("\n");
            break;
        case 4:
            printf("Postorder Traversal: ");
            postorderTraversal(root);
            printf("\n");
            break;
        case 5:
            printf("Enter data to search: ");
            scanf("%d", &data);
            if (searchNode(root, data) != NULL)
            {
                printf("Node found\n");
            }
            else
            {
                printf("Node not found\n");
            }
            break;
        case 6:
            printf("Enter data to delete: ");
            scanf("%d", &data);
            root = deleteNode(root, data);
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    getch();
    return 0;
}
