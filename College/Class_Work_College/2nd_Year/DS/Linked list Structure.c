#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
int main()
{
    int i,n ;
    node *head,*ptr,*ptr1;
    printf("enter the number of node in the linked list ");
    scanf("%d",&n);
    head=(node*)malloc(sizeof(node));
printf("enter values one by one  ");
scanf("%d",&head->data);
head->next=NULL;
ptr =head;
for(i=1;i<n;i++)
{
    ptr1=(node*)malloc(sizeof(node));
    scanf("%d",&ptr1->data);
    ptr->next=ptr1;
    ptr1->next=NULL;
    getch();
    return 0;
}
}

// #include <stdio.h>
// #include <stdlib.h>
// #include<conio.h>
// struct node
// {
//     int data; //data of the node
//     struct node *nextPtr; //address of the next node
// };
// struct node *startNode;

// //function to create the list
// static void createNodeList(int totalNodes);
// static void displayList();
// int main()
// {
//     int numberOfNodes;

//     printf("Input the number of nodes: ");
//     scanf("%d", &numberOfNodes);
//     createNodeList(numberOfNodes);
//     displayList();
//     getch();
//     return 0;
// }

// static void createNodeList(int totalNodes)
// {
//     struct node *newNode;
//     struct node *nodeBuffer;
//     int nodeData;
//     int nodeCounter;

//     //allocate memory for starting node
//     startNode = (struct node*)malloc(sizeof(struct node));

//    //at this point you can check if the memory allocation is      
//    //and stop the program if not 

// printf("input data for node1: ");
//         scanf("%d", &nodeData);

//         //save user input to the data element of the node
//         startNode->data = nodeData;
//         //initialize the nodes next pointer to null
//         startNode->nextPtr = NULL;
//         //Point the buffer to address of the first node
//         nodeBuffer = startNode;

//    for(nodeCounter =2; nodeCounter<=totalNodes; nodeCounter++)
//         {

//             newNode = (struct node*)malloc(sizeof(struct node));

//             //exit if new node cannot be allocated
//             if(newNode == NULL)
//             {
//                 printf("Memory cannot be allocated.");
//                 break;
//             }
//             else
//             {
//                 printf("input data for node %d: ",nodeCounter);
//                 scanf("%d", &nodeData);

//                 newNode->data = nodeData;
//                 newNode->nextPtr = NULL;

//                 //Link the previous node to the current node
//                 nodeBuffer->nextPtr = newNode;
//                 //copies address of current node
//                 nodeBuffer = nodeBuffer->nextPtr;
//             }

//         }
// }

//  static void displayList()
//  {
//     struct node *nodeBuffer;
//     nodeBuffer = startNode;
//     //exit if it is empty
//     if(nodeBuffer == NULL)
//     {
//         printf("List is empyt");
//         return 0;
//     }
//     else
//     {
//         //check if the current node is empty
//         while (nodeBuffer != NULL)
//         {
//             //PRINT THE DATA OF CRRENT NODE
//             printf("DATA: %d \n", nodeBuffer->data);
//             //go to the next node
//             nodeBuffer = nodeBuffer->nextPtr;
//         }
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include<conio.h>
// struct node
// {
//     int data;
//     struct node *next;
// };

// int main()
// {
//     struct node *prev,*head,*p;
//     int n,i;
//     printf ("number of elements:");
//     scanf("%d",&n);
//     head=NULL;
//     for(i=0;i<n;i++)
//     {
//         p=malloc(sizeof(struct node));
//         scanf("%d",&p->data);
//         p->next=NULL;
//         if(head==NULL)
//             head=p;
//         else
//             prev->next=p;
//         prev=p;
//     }
//     printf("\n===========\n");
//     p=head;
//     while(p!=NULL)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }
//     getch();
//     return 0;
// }



