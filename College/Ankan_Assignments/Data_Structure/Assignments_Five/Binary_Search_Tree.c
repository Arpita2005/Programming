#include <stdio.h>
#include <stdlib.h>

// Structure for a BST Node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new Node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a Node into the BST
struct Node *insertNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }

    // If data is smaller, insert in the left subtree
    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    // If data is larger, insert in the right subtree
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }

    return root;
}

// Function to search for a key in the BST
struct Node *search(struct Node *root, int key)
{
    if (root == NULL || root->data == key) // root is the key element , or the tree is null
    {
        return root;
    }

    // If key is smaller, search in the left subtree
    if (key < root->data)
    {
        return search(root->left, key);
    }

    // If key is larger, search in the right subtree
    return search(root->right, key);
}

// Function to find the smallest Node in the BST
struct Node *findMinNode(struct Node *node)
{
    // Keep traversing left until a leaf is reached
    while (node->left != NULL)
    {
        node = node->left;
    }
    return node;
}

// Function to delete a Node with the given key from the BST
struct Node *deleteNode(struct Node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }

    // If key is smaller, delete from the left subtree
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    // If key is larger, delete from the right subtree
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    // If key is found
    else
    {
        // Case 1: Node with only one child or no child
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

        // Case 2: Node with two children
        // Get the inorder successor (smallest in the right subtree)
        struct Node *temp = findMinNode(root->right);

        // Copy the inorder successor's data to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Main function
int main()
{
    struct Node *root = NULL;
    int choice, key;

    // Menu-driven program
    while (1)
    {
        printf("1. Insert Node\n");
        printf("2. Search Node\n");
        printf("3. Delete Node\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &key);
            root = insertNode(root, key);
            break;
        case 2:
            printf("Enter the value to search: ");
            scanf("%d", &key);
            if (search(root, key) != NULL)
            {
                printf("%d found in the BST.\n", key);
            }
            else
            {
                printf("%d not found in the BST.\n", key);
            }
            break;
        case 3:
            printf("Enter the value to delete: ");
            scanf("%d", &key);
            root = deleteNode(root, key);
            printf("Node with value %d deleted from the BST.\n", key);
            break;
        case 4:
            // Free allocated memory for the BST nodes (not shown in the comments)
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
