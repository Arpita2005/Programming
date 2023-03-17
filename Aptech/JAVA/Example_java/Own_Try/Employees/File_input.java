package Employees;
import java.io.*;
public class File_input {
    static void file_input(String Data)throws Exception
    {
       FileWriter FR= new FileWriter("Employees_data.txt");
        FR.write(Data);
        FR.close();
        // System.out.println(Data);
        File_Search.employees_file_search();
    }
}