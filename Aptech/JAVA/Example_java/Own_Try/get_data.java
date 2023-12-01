public class Student {
    String name;
    int age;
    String address;
    double gpa;
    String major;
    int studentID;

    // Method to set data
    public void setData(String name, int age, String address, double gpa, String major, int studentID) {
        this.name = name;
        this.age = age;
        this.address = address;
        this.gpa = gpa;
        this.major = major;
        this.studentID = studentID;
    }

    // Method to get data (if needed)
    public String getData() {
        return "Name: " + name + "\nAge: " + age + "\nAddress: " + address + "\nGPA: " + gpa + "\nMajor: " + major + "\nStudent ID: " + studentID;
    }

    public static void main(String[] args) {
        Student student1 = new Student();

        // Using the setData method to initialize the object data
        student1.setData("Alice", 20, "123 Main St", 3.5, "Computer Science", 12345);

        // Displaying the information using the getData method
        System.out.println(student1.getData());
    }
}
