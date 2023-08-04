public class command_Greater 
{
    public static void main(String[] args) 
    {
        if(args.length==0)
        {
            System.out.println("There is no input \n");
        } 
        else
        {
            double max= Double.parseDouble(args[0]);
            double num;
            for(int i=0;i<args.length;i++)
            {
                num=Double.parseDouble(args[i]);
                if(num>max)
                {
                    max=num;
                }
            }
            System.out.println("The Maximum number is :\n"+max);
        }  
    }   
}
