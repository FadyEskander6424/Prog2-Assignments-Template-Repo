//fady hany phillip
//20216424
importjava.util.Scanner;

public class PrimeNumberProgram {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int number = scanner.nextInt();

    boolean isPrime = true;
    for (int i = 2; i < number; i++) {
      if (number % i == 0) {
        isPrime = false;
        break;
      }
    }

    if (number < 2) {
      isPrime = false;
    }

    if (isPrime) {
      System.out.println(number + " is a prime number.");
    } else {
      System.out.println(number + " is not a prime number.");
    }
  }
}
