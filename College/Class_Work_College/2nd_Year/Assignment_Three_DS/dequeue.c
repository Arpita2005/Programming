#include <stdio.h>   
#include<conio.h> 
#define size 5  
int deque[size];    
int f = -1, r = -1;    
//  insert_front function will insert the value from the front    
void insert_front(int x)    
{    
    if((f==0 && r==size-1) || (f==r+1))    
    {    
        printf("Overflow");    
    }    
    else if((f==-1) && (r==-1))    
    {    
        f=r=0;    
        deque[f]=x;    
    }    
    else if(f==0)    
    {    
        f=size-1;    
        deque[f]=x;    
    }    
    else    
    {    
        f=f-1;    
        deque[f]=x;    
    }    
}    
    
// insert_rear function will insert the value from the rear    
void insert_rear(int x)    
{    
    if((f==0 && r==size-1) || (f==r+1))    
    {    
        printf("Overflow");    
    }    
    else if((f==-1) && (r==-1))    
    {    
        r=0;    
        deque[r]=x;    
    }    
    else if(r==size-1)    
    {    
        r=0;    
        deque[r]=x;    
    }    
    else    
    {    
        r++;    
        deque[r]=x;    
    }    
    
}    

void display()    
{    
    int i=f;    
    printf("\nElements in a deque are: ");    
        
    while(i!=r)    
    {    
        printf("%d ",deque[i]);    
        i=(i+1)%size;    
    }    
     printf("%d",deque[r]);    
}    
  
void getfront()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at front is: %d", deque[f]);    
    }    
        
}    
    
// getrear function retrieves the last value of the deque.    
void getrear()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at rear is %d", deque[r]);    
    }    
        
}    
    
// delete_front() function deletes the element from the front    
void delete_front()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(f==r)    
    {    
        printf("\nThe deleted element is %d", deque[f]);    
        f=-1;    
        r=-1;    
            
    }    
     else if(f==(size-1))    
     {    
         printf("\nThe deleted element is %d", deque[f]);    
         f=0;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[f]);    
          f=f+1;    
     }    
}    
    
// delete_rear() function deletes the element from the rear    
void delete_rear()    
{    
    if((f==-1) && (r==-1))    
    {    
        printf("Deque is empty");    
    }    
    else if(f==r)    
    {    
        printf("\nThe deleted element is %d", deque[r]);    
        f=-1;    
        r=-1;    
            
    }    
     else if(r==0)    
     {    
         printf("\nThe deleted element is %d", deque[r]);    
         r=size-1;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", deque[r]);    
          r=r-1;    
     }    
}    
    
int main()    
{    
    int choice, x;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Display\n");
        printf("4. Get Front Element\n");
        printf("5. Get Rear Element\n");
        printf("6. Delete Front\n");
        printf("7. Delete Rear\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &x);
                insert_front(x);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &x);
                insert_rear(x);
                break;
            case 3:
                display();
                break;
            case 4:
                getfront();
                break;
            case 5:
                getrear();
                break;
            case 6:
                delete_front();
                break;
            case 7:
                delete_rear();
                break;
            case 8:
               exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    getch();;
    return 0;
}     