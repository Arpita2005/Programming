+#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char paragraph[1000];
    int i,count=0;
    printf("The Paragraph is:\n");
    //scanf("%[^\nc]",paragraph);
    gets(paragraph);
    for(i=0;paragraph[i]!='\0';i++)
    {
        if(paragraph[i]=='.')
        {
            count++;
        }
    }
    printf("The numbers of line in the paragraphs:\n%d",count);
    getch();
    return 0;
}
//Flowers carry importance in each nook and corner of the world. They also come in use for making medicines. Similarly, we also make difference in fragrance perfumes from the flowers. Further, the butterflies, birds and bees take the flowers as food.