import java.util.Scanner;

//main class
public class function_calculator {

  //addition function
  public static void addition() {
    int fn, sn, answer;
    Scanner input = new Scanner(System.in);
    System.out.println("Java addition");
    System.out.println("Enter first Number :");
    fn = input.nextInt();
    System.out.println("Enter second Number :");
    sn = input.nextInt();
    input.close();
    answer = (fn + sn);
    System.out.println(
      "The addition of " + fn + " and " + sn + " is = " + answer
    );
  }

  //substraction function
  public static void substraction() {
    int fn, sn, answer;
    Scanner input = new Scanner(System.in);
    System.out.println("Java Substraction");
    System.out.println("Enter first Number :");
    fn = input.nextInt();
    System.out.println("Enter second Number :");
    sn = input.nextInt();
    input.close();
    answer = (fn - sn);
    System.out.println(
      "The Substraction of " + fn + " and " + sn + " is = " + answer
    );
  }

  //division function
  public static void division() {
    int fn, sn, answer;
    Scanner input = new Scanner(System.in);
    System.out.println("Java division");
    System.out.println("Enter first Number :");
    fn = input.nextInt();
    System.out.println("Enter second Number :");
    sn = input.nextInt();
    input.close();
    answer = (fn / sn);
    System.out.println(
      "The division of " + fn + " and " + sn + " is = " + answer
    );
  }

  //multiplication function
  public static void multiplication() {
    int fn, sn, answer;
    Scanner input = new Scanner(System.in);
    System.out.println("Java multiplication");
    System.out.println("Enter first Number :");
    fn = input.nextInt();
    System.out.println("Enter second Number :");
    sn = input.nextInt();
    input.close();
    answer = (fn * sn);
    System.out.println(
      "The multiplication of " + fn + " and " + sn + " is = " + answer
    );
  }

  //reminder function
  public static void reminder() {
    int fn, sn, answer;
    Scanner input = new Scanner(System.in);
    System.out.println("Java reminder");
    System.out.println("Enter first Number :");
    fn = input.nextInt();
    System.out.println("Enter second Number :");
    sn = input.nextInt();
    input.close();
    answer = (fn % sn);
    System.out.println(
      "The reminder of " + fn + " and " + sn + " is = " + answer
    );
  }

  //This function will decide to call that calculation function which use input
  public static void calculation() {
    System.out.println("My first java simple calculator");
    System.out.println(
      "Enter what you want to do \n 1. Addition \n 2. Subsraction \n 3. Multiplication \n 4. Division \n 5. Reminder \n ->"
    );
    Scanner input = new Scanner(System.in);
    int decide = input.nextInt();

    if (decide == 1) {
      addition();
    } else if (decide == 2) {
      substraction();
    } else if (decide == 3) {
      multiplication();
    } else if (decide == 4) {
      division();
    } else if (decide == 5) {
      reminder();
    } else {
      System.out.println("Sorry you have entered wrong input " + decide);
    }
    input.close();
  }

  public static void main(String[] args) {
    calculation();
    // int choose;
    // Scanner sc = new Scanner(System.in);
    // do {
    //   calculation();
    //   System.out.println("Do you want to Re Calculate \n 1. YES 2. NO");
    //   choose = sc.nextInt();
    // } while (choose == 1);
    // sc.close();
    // System.out.println("Terminal Quited");
  }
}
