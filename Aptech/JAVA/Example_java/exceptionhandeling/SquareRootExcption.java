import java.io.*;
public class SquareRootExcption extends Exception
{
    float f;
	public SquareRootExcption(float x)
	{
		f=x;
	}
	public void getSqrt() throws SquareRootExcption
	{
	    float result;
		if(f>=0.0)
		{
			result=(float)Math.sqrt(f);
			System.out.println("Result=   "+result);
		}
		else
		    throw new SquareRootExcption(f);
		    
	}
}