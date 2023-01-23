import java.util.*;

class student
{
    String name;
    int roll;
    int marks;

    student(String name, int roll, int marks)
    {
        this.name = name;
        this.roll = roll;
        this.marks = marks;
    }
}

class foreach_loop
{
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        Scanner input=new Scanner(System.in);

        String name;

        int roll,marks;

        System.out.println("How many Students are there:\n");
        int num=sc.nextInt();


        student s1[] = new student[num];

        for(int i=0;i<num;i++)
        {
            System.out.println("Enter the Name of Student"+(i+1));
            name=input.nextLine();
            System.out.println("Enter the Roll of Student"+(i+1));
            roll=sc.nextInt();
            System.out.println("Enter the Marks of Student"+(i+1));
            marks=sc.nextInt();

            // s1[i]=new Student(name, roll, marks);
        }
           
        
        for(student s : s1)
        {
            System.out.println("Name: " + s.name);
            System.out.println("Roll: " + s.roll);
            System.out.println("Marks: " + s.marks);
            System.out.println("===============================");
        }

    }
}