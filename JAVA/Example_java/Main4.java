import java.util.Formatter;

public class Main4 
{
  public static void main(String args[]) 
  {
		Formatter fmt = new Formatter();
		int i;   
		fmt.format("Copying file%nTransfer is %d%% complete", 88);
		System.out.println(fmt);
  }
}