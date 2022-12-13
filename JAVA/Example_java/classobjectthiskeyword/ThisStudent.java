import java.util.*;
// this can be used to return the current class instance from the method.
public class ThisStudent 
{
   private String name;
   private int age;
   
   public ThisStudent setValues()
   {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the name of the student: ");
		String name = sc.nextLine();
		System.out.println("Enter the age of the student: ");
		int age = sc.nextInt();
		this.name = name;
		this.age = age;
		return this;
   }
   public void display() 
   {
		System.out.println("name: "+name);
		System.out.println("age: "+age);
   }
   public static void main(String args[]) 
   {
		ThisStudent obj = new ThisStudent();
		obj = obj.setValues();
		obj.display();
   }
}