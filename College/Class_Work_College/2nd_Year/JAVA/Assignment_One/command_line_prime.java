public class command_line_prime
{
    public static void main(String[] args) 
    {
        if(args.length==0)
        {
            System.out.println("There is no input \n");
        }
        else
        {
            double num;
            for(int i=0;i<args.length;i++)
            {
                num=Double.parseDouble(args[i]);
                if(num%2==0)
                {
                    System.out.println(num+" is a Prime Number \n");
                }
            }
        }
    }
}