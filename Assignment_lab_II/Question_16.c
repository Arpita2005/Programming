#include<stdio.h>
#include<conio.h>
# define maxsize 1000
int main()
{
    int arr[maxsize];
    int i,size,number[30],j,a;

    /* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : \n");
    for (i = 0; i < size; i++)
    {
        printf("Enter elements in position %d : ", i + 1);
        scanf("%d", &number[i]);
    }
        for(i=0;i<size;++i)
        {
            for(j=i+1;j<size;j++)
            {
                if(number[i]<number[j])
                {
                    a=number[i];
                    number[i]=number[j];         //swapping
                    number[j]=a;
                }
            }
        }

    printf("The numbers arranged in decending order are:\n");
    for(i=0;i<size;++i)
    {
        printf("%5d\n",number[i]);
    }
    printf("The second largest number is:%d\n",number[1]);
 getch();
    return 0;
}
// #include<stdio.h>
// #include<conio.h>
// void main(){
//    int i,j,a,n,counter,ave,number[30];
//    printf ("Enter the value of N");
//    scanf ("%d", &n);
//    printf ("Enter the numbers ");
//    for (i=0; i<n; ++i)
//       scanf ("%d",&number[i]);
//    for (i=0; i<n; ++i){
//       for (j=i+1; j<n;j++)
//       {
//          if (number[i] < number[j])
//          {
//             a = number[i];
//             number[i] = number[j];
//             number[j] = a;
//          }
//       }
//    }
//    printf ("The numbers arranged in descending order are given below");
//    for (i=0; i<n; ++i)
//      printf ("%10d",number[i]);
//    printf ("The 2nd largest number is = %d", number[1]);
//    getch();
// }