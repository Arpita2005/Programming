class Employee
{  
    int id;  
    String name;  
    double salary; 
	
    void insert(int i, String n, double s) 
	{  
        id=i;  
        name=n;  
        salary=s;  
    }  
  void display()
	{
		System.out.println(id+"    "+name+"    "+salary);
    }  
}  
public class TestEmployee 
{  
  public static void main(String[] args) 
  {  
    Employee e1=new Employee();  
    Employee e2=new Employee();  
    Employee e3=new Employee();
    Employee e4=new Employee();  
	
    e1.insert(101,"Ajeet",45000);  
    e2.insert(102,"Irfan",25000);  
    e3.insert(103,"Nakul",55000); 
    e4.insert(100,"Arpita",150000.50);  
    
    e1.display();  
    e2.display();  
    e3.display();
    e4.display();  
  }  
}  