public class Command_line_prime 
{
    public static void main(String[] args) 
    {
        if (args.length == 0) 
        {
            System.out.println("Give the input please ");
        } 
        else 
        {
            System.out.println("Prime numbers: ");
            for (int i = 0; i < args.length; i++) 
            {
                double num = Double.parseDouble(args[i]);
                boolean isPrime = true;

                if (num <= 1) 
                {
                    isPrime = false;
                } 
                else 
                {
                    for (int j = 2; j <= Math.sqrt(num); j++) 
                    {
                        if (num % j == 0) 
                        {
                            isPrime = false;
                            break;
                        }
                    }
                }

                if (isPrime) 
                {
                    System.out.println("\t" + num);
                }
            }
        }
    }
}
