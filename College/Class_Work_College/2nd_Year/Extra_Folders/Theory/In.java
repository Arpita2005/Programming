class Room
{
     int length = 5;
     int breadth = 10 ;
}
class A extends Room
{
    public void cal()
    {
        int area = length*breadth;
        System.out.println("Area is : \n"+area);
    }
}
public class In extends A
{
    public static void main(String[] args) {
         In a = new In();
         a.cal();
    }
  
}