class break2
{        
	public static void main (String args[])        
	{
        boolean t=true;                
		a:                
		{                        
			b:                        
			{                                
				   c:
				   {                                        
						System.out.println("Before the break");                                        
						if(t)                                                
							break b;                                        
						System.out.println("This will not execute1");                                
					}                                
					System.out.println("This will not execute2");
                        
			}                        
			System.out.println("This is after b");
                
		}
        
	}
}
				