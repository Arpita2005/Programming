class Animal {
String color;  
Animal(String color){  
this.color = color;  
}  
void eat(String name) {  
System.out.println(name + " is eating .....");  
}  
void show(String name) {  
System.out.println(name + " is of " + color + " Color");  
}  
}  
 class Dog extends Animal
 {
        Dog(String color) 
{  
      super(color);  // TODO Auto-generated constructor stub 
 
}  
void eat(String name)
{  
System.out.println(name + " is eating ....");  
}  
}  
  
class ClassCastException {
public static void main(String[] args) 
{  

Dog dog = new Dog("black");  
Animal animal = new Animal("White");  
animal = dog;  
animal.show("My dog");  
  
Animal animal1 = new Animal("White");  
Dog d = (Dog)animal1; 

}  
}  