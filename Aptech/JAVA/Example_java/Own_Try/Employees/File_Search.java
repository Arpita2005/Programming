package Employees;
import java.io.*;
public class File_Search {
    static String searchname,line;
    static boolean checked;
   public static void employees_file_search() throws Exception
   {

    try {
        FileReader fileReader = new FileReader("Employees_data.txt");
        BufferedReader brd = new BufferedReader(new InputStreamReader(System.in));
        BufferedReader br = new BufferedReader(fileReader);
        System.out.print("Enter Employee name : \n-> ");
        searchname = brd.readLine();
        aa:while ((line = br.readLine()) != null) {
          if (line.contains(searchname)) {
            checked = true;
            break aa;
          }
        }
        br.close();
      } catch (IOException ex) {
        System.out.println("Exception name : " + ex);
      }
      if (checked == true) {
        System.out.println(line);
      } else {
        System.out.println("Record not found");
      }
   }    
}