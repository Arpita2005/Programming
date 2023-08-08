//3. Write a C program to read numbers from a file and write even, odd and prime numbers to separate file.
#include <stdio.h>
#include<conio.h>
  int main() {
        FILE *fp1, *fp2, *fp3, *fp4;
        int n, i, num, flag = 0;

        fp1 = fopen("data.txt", "w");
        printf("Enter the value for n:");
        scanf("%d", &n);
        for (i = 0; i <= n; i++)
                fprintf(fp1, "%d ", i);
        fprintf(fp1, "\n");
        fclose(fp1);

         
        fp1 = fopen("data.txt", "r");
        fp2 = fopen("even.txt", "w");
        fp3 = fopen("odd.txt", "w");
        fp4 = fopen("prime.txt", "w");

        fprintf(fp2, "Even Numbers:\n");
        fprintf(fp3, "Odd Numbers:\n");
        fprintf(fp4, "Prime Numbers:\n");

        /* print even, odd and prime numbers in separate files */
        while (!feof(fp1))
         {
                fscanf(fp1, "%d", &num);
                if (num % 2 == 0)
                 {
                        fprintf(fp2, "%d ", num);
                } 
                else
                 {
                        if (num > 1) 
                        {
                                for (i = 2; i < num; i++) 
                                {
                                        if (num % i == 0) 
                                        {
                                                flag = 1;
                                                break;
                                        }
                                }
                                if (!flag) 
                                {
                                        fprintf(fp4, "%d ", num);
                                }
                        }
                        fprintf(fp3, "%d ", num);
                        flag = 0;
                }
        }
        fprintf(fp2, "\n");
        fprintf(fp3, "\n");
        fprintf(fp4, "\n");

        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
        fclose(fp4);
        getch();
        return 0;
  }
