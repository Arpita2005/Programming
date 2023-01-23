import java.util.Date;
import java.util.Formatter;
import java.util.Calendar;

public class Main2
{
  public static void main(String args[])  
  {
    Formatter fmt = new Formatter();
    Date d1=new Date();
    System.out.println(d1);
    fmt.format("%s", new Date());// Anonymous object
    System.out.println(fmt);	 // get a calendar instance, which defaults to "now"
    Calendar cal = Calendar.getInstance();     // get a date to represent "today"
    Date today = cal.getTime();
    System.out.println("today:    " + today);   // add one day to the date/calendar
    cal.add(Calendar.DAY_OF_YEAR, 1);    // now get "tomorrow"
    Date tomorrow = cal.getTime();    // print out tomorrow's date
    System.out.println("tomorrow: " + tomorrow);	  // subtract two days to the date/calendar
    cal.add(Calendar.DAY_OF_YEAR, -2);    // now get "yesterday"
    Date yesterday = cal.getTime(); // print out yesterday's date
    System.out.println("Yesterday: " + yesterday);
  }
}