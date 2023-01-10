    public class ForEachExample 
	{  
		public static void main(String[] args) 
		{  
			int arr[]={12,23,44,56,78};  
			// Traversing array elements using Enhanced for loop 
			// for(datatype variablename:arrayname) {   body   } 
			for(int i:arr)
			{  
				System.out.println(i);  
			}  
			System.out.println(); 
            // Traversing array elements using simple for loop 		
				
			for(int j=0;j<arr.length;j++)
			{  
				System.out.println(arr[j]);  
			}  
		}  
    }  