class Vehicle 
{
   String color;
   private int speed;
   private int size;
   
   public int getSize() 
   {
      return size;
   }
   public int getSpeed() 
   {
      return speed;
   }
   public void setSize(int i) 
   {
      size = i;
   }
   public void setSpeed(int i) 
   {
      speed = i;
   }
}
// A subclass which extends for vehicle
class Car extends Vehicle 
{
   int CC;
   int gears;
   String color;
   void attributescar() 
   {}
}
public class Test_Car 
{
   public static void main(String args[]) 
   {
     Car b1 = new Car();
     // the subclass can inherit 'color' member of the superclass
     b1.color = "Blue"; 
     b1.setSpeed(200);
     b1.setSize(22);
     b1.CC = 1000;
     b1.gears = 5;
     // The subclass refers to the members of the superclass
     System.out.println("Color of Car : " + b1.color);
     System.out.println("Speed of Car : " + b1.getSpeed());
     System.out.println("Size of Car : " + b1.getSize());
     System.out.println("CC of Car : " + b1.CC);
     System.out.println("No of gears of Car : " + b1.gears);
  }
}
