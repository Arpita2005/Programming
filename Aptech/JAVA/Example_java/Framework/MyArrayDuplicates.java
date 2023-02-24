import java.util.Arrays;
import java.util.List;
import java.util.TreeSet;
 
public class MyArrayDuplicates 
{ 
    public static void main(String a[])
	{
        String[] strArr = {"one","two","three","four","four","five"};
        //convert string array to list
        List<String> tmpList = Arrays.asList(strArr);
        //create a treeset with the list, which eliminates duplicates
		// TreeSet contains unique elements and ascending order elements 
        TreeSet<String> unique = new TreeSet<String>(tmpList);
        System.out.println(unique);
    }
}