public class command_even_odd 
{
       public static void main(String[] args) 
       {
            if(args.length==0)
            {
                System.out.println("No input !!\n");
            }
            else
            {
                double sum=Double.parseDouble(args[0]);
                double ave=Double.parseDouble(args[0]);
                for(int i=0;i<args.length;i++)
                {
                    double num=Double.parseDouble(args[i]);
                    if(num%2==0)
                    {
                        System.out.println("Even number ");
                        sum=sum+num;
                        ave=sum/args.length;
                    }

                    System.out.println("The sum is :\n"+sum);
                    System.out.println("The Average is :\n"+ave); 

                    // else
                    // {
                    //     System.out.println("Odd number ");
                    //     sum=sum+num;
                    //     ave=sum/args.length;
                    //     System.out.println("The sum is :\n"+sum);
                    //     System.out.println("The Average is :\n"+ave); 
                    // }
                }
            }
       }
}
