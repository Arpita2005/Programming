//prime numbers using command line 
public class six 
{
    public static void main(String[] args) {
        if(args.length==0)
        {
            System.out.println("No input");
        }
        else
        {
            double num= Double.parseDouble(args[0]);
            double m = num/2;
            double flag=0.0;
            if(num==0||num==1)
            {
                System.out.println(num+" is not prime number \n");
            }
            else
            {
                for(int i=2;i<=m;i++)
                {
                    if(num%i==0)
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag==0)
              { 
                System.out.println(num+"is a prime number \n");
              }
            }

           
        }
    }   
}
