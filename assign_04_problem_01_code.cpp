//fady hany phillip
//20216424
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("enter the number of numbers");
        int x = sc.nextInt();
        int[] num = new int[x];
        for (int y = 0; y <= x; y++) {
            num[y] = sc.nextInt();
            if (num[y] >= 1) {
                System.out.print("1"+" ");
            } else if (num[y] == 0) {
                System.out.print("0"+" ");
            } else if (num[y] < 0) {
                System.out.print(Math.abs(num[y])+" ");

            }
        }
    }
}
