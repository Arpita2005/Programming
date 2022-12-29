class Student4
{  //instance variables
	int rollno;  
	String name;      
	//instance methods 
	void insertRecord(int r, String n)
	{  
			rollno=r;  
			name=n;  
    }  
    void displayInformation()
    {
	    System.out.println(rollno+"    "+name);
    }  
}  
class TestStudent4
{  
	 public static void main(String args[])
	 {  
		  //Creating objects
		  Student4 s1=new Student4();  
		  Student4 s2=new Student4();
		  // Initializing data by method call
		  s1.insertRecord(111,"Karan");  
		  s2.insertRecord(222,"Aryan");  
		  // Printing data by method call
		  s1.displayInformation();  
		  s2.displayInformation();  
     }  
}  