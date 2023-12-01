class Test
{
    private String name;
  
    // constructor
    public Test() 
    {
      System.out.println("Constructor Called:");
      name = "Programiz";
    }
  
    public static void main(String[] args) {
  
      // constructor is invoked while
      // creating an object of the Main class
      Test obj = new Test();
      
      System.out.println("The name is " + obj.name);
    }
  }