/*  C program to find Total Amount of purchased Items by Passing Structure
as an argument using User Define Functions.*/ 
#include<stdio.h>     
/*declaration of structure*/
struct Item
{
    char itemName[30];
    int quantity;
    float price, totalAmount;
}; 
/*function declaration*/
float getTotalAmount(struct Item); 
int main()
{
    /*structure variable declaratio*/
    struct Item IT;
    float tAmount; /*total amount*/
     
    printf("Enter Item Name (max 30 characters): ");
    gets(IT.itemName);
    /*we can also use gets(IT.itemName) - To read complete text untill '\n'*/
     
    printf("Enter price: ");
    scanf("%f",&IT.price);
     
    printf("Enter quantity: ");
    scanf("%d",&IT.quantity);
     
    /*calling function by passing structure Item's variable "IT"*/
    tAmount=getTotalAmount(IT);
     
    printf("Item Name: %s\nPrice: %.2f\nQuantity: %d\n",IT.itemName, IT.price, IT.quantity);
    printf("\nTotal Price of all quanities: %.2f\n",tAmount);
    return 0;
} 
/* function definition...* Function     :   getTotalAmount * Argument(s)  :   struct Item - Item Structure name * Return Type  :   float - Total amount
*/
float getTotalAmount(struct Item item)
{
    /* remember Item - Is structure and "item" is structure variable name
     * which is formal here*/
      
     item.totalAmount= item.price * (float)item.quantity;
      
     return (item.totalAmount);  
}
