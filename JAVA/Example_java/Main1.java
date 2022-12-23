import java.util.Formatter;

public class Main1 
{
  public static void main(String args[]) 
  {
    Formatter fmt = new Formatter();
    fmt.format("%s gap filler %d %f", "Astring", 10, 12.3);
    System.out.println(fmt); 
  
  }
}