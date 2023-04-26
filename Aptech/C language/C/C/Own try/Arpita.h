
int sum_of_numbers(int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
}

float avg_of_numbers(int x,int y)
{
    float result;
    result=(x+y)/2;
    return result;
}

int incre_loop()
{
    int f_num,e_num,x;
    printf("Enter the starting number :\n");
    scanf("%d",&f_num);
    printf("Enter the ending range :\n");
    scanf("%d",&e_num);
    for(x=f_num;x<=e_num;x++)
    printf("%d\n",x);
}