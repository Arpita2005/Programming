public class largesmall_num
{
    public static void main(String[] args)
    {
        int a=10,b=20,c=30,d;
        d=(a>b)?(a>c?a:c):(b>c?b:c);
        System.out.println(d);
    }
}