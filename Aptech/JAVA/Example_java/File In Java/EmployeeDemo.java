import java.io.*;

class Employee
{
	String name,searchName,doj;
	double basic,hra,da,pf,it,gross,net;
	
	void acceptData(BufferedReader br) throws IOException 
	{
		
		System.out.println("Enter name:   ");
		name=br.readLine();
		System.out.println("Enter date of joining :   ");
		doj=br.readLine();
		System.out.println("Enter basic:   ");
		basic=Double.parseDouble(br.readLine());
		hra=(double)0.12*basic;
        da = (double)0.65*basic;
	    pf=(double)0.23*(basic+da);
	    it=(double)0.22*basic;
	    gross=(double)(basic+da+hra+pf+it);
        net=(double)(gross-(pf+it));
		
	}
	void readFile(String fname) throws IOException
	{
		String line = null;
		boolean b=false;		
		
        try
        {
            FileReader fileReader = new FileReader(fname);  
            BufferedReader brd = new BufferedReader(new InputStreamReader(System.in));            
            BufferedReader br = new BufferedReader(fileReader);
			System.out.println("Enter name to search:   ");
		    searchName=brd.readLine();
            aa:while((line = br.readLine()) != null)
            {
                if(line.contains(searchName))
				{
					b=true;
					break aa;
				}			
            }		
            
            // always close the file after its use
            br.close();
			
        }
        catch(IOException ex)
        {
            System.out.println("\nError occurred");
            System.out.println("Exception Name: " +ex);
        }
		/*if(b==true)
			return line;
		else
			return "Record Not Found";*/
	    
		if(b==true)
			System.out.println(line);
		else
			System.out.println("Record Not Found");
	}
	
	void printFile(String line)
	{
		System.out.println(line);
	}
	
    void writeHead(PrintWriter pw,String fileName)
    {
      String head = "Name     Date of joining   Basic salary    HRA    DA    PF    IT    Gross    Net ";
	  String underline = "============================================================";
      try 
	  {

		  pw.print(head);
		  pw.print(underline);
		  pw.close();
      }
	  catch(Exception e) 
	  {
		  e.getStackTrace();
	  }	  
	  
    }
	
	void writeFile(FileWriter fw,BufferedWriter bw)
	{
		String data=name+"     "+doj+"       "+basic+"    "+hra+"    "+da+"    "+pf+"    "+it+"    "+gross+"    "+net;
		try 
		{			
			bw.newLine();
            bw.write(data);
        }
        catch(Exception e) 
	    {
           e.getStackTrace();
        }
	}
	
}
public class EmployeeDemo
{   
   public static void main(String[] args)throws IOException 
   {
      
	  char ch;
	  BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	  File file =new File("Employee.txt");
	  PrintWriter outfile= new PrintWriter(file);
	  FileWriter fw = new FileWriter(file,true);
	  BufferedWriter bw = new BufferedWriter(fw);
	  int i,j;
	  
	  Employee e = new Employee();	  
	   //list of employees in the file 
      Employee[] emp = new Employee[20];
      
	  e.writeHead(outfile,"Employee.txt");
	  for(i=0;i<3;i++)
	  {
		  emp[i]=new Employee();
		  try
		  {
			 j=i+1;
			 System.out.println("Enter Record "+j+"\n");
			 emp[i].acceptData(br); // Input Data from user
			 emp[i].writeFile(fw,bw);  // Write Data into the file 
		  }
		  catch(Exception ex) 
	      {
             ex.getStackTrace();
          }
	  }
	  bw.close();
	  
	  try
	  {
		  e.readFile("Employee.txt");
		 // e.printFile(line);
	  }
	  catch(Exception ex) 
	  {
          ex.getStackTrace();
      }	  
	  
   }
}