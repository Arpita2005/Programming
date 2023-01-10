class NestedForLoopExample
{
    public static void main(String arg[])
    {
        for(int outer = 0; outer <= 2;  outer++)
        {
            for(int inner = 0; inner <= 3; inner++)
            {
                System.out.println(outer + "   " + inner);
            }
            System.out.println();
        }       
    
    }
}