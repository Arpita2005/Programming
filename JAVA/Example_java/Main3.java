import java.util.Formatter;

public class Main3
{
	  public static void main(String args[]) 
	  {
			Formatter fmt = new Formatter();
			fmt.format("line%nline %d%% complete", 88);
			System.out.println(fmt);
	  }
}