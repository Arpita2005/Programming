    public class ForExample 
	{  
		public static void main(String[] args) 
		{ 
		
			for(int i=1;i<=10;i++) 
			{
				try
				{
					Thread.sleep(1000);
				}
				catch(InterruptedException e)
				{ }
				System.out.println(i); 
			}  
		}  
    }  