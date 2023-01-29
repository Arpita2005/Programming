//Write a C program to remove empty lines from a text file.
#include <stdio.h>
#include <string.h>
#include<conio.h>
  #define MAX 256

  int main(int argc, char **argv)
   {
        FILE *fp1, *fp2;
        char str[MAX];

        /* open the input file in read mode */
        fp1 = fopen(argv[1], "r");

        /* incase if file pointer is null */
        if (!fp1) {
                printf("Unable to open input file!!\n");
                return 0;
        }

        /* open another file in write mode */
        fp2 = fopen(argv[2], "w");

        if (!fp2) {
                printf("Unable to open the file to write\n");
                return 0;
        }

        while (!feof(fp1)) {
                fgets(str, MAX, fp1);
                if (strcmp(str, "\n") == 0) {
                        continue;
                }
                fputs(str, fp2);
                strcpy(str, "\0");
        }

        /* close both the files */
        fclose(fp1);
        fclose(fp2);

        remove(argv[1]);
        /* rename output file to source file name */
        rename(argv[2], argv[1]);
        getch();
        return 0;
  }