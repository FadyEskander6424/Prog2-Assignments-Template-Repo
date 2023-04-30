//fady hany phillip
//20216424
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); // number of test cases
        while (t-- > 0) {
            int n = sc.nextInt(); // number of elements
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            int minSum = findMinSum(a);
            System.out.println(minSum);
        }
    }

    public static int findMinSum(int[] a) {
        int min1 = Integer.MAX_VALUE, min2 = Integer.MAX_VALUE;
        for (int i = 0; i < a.length; i++) {
            int ai = a[i];
            if (ai < min1) {
                min2 = min1;
                min1 = ai;
            } else if (ai < min2) {
                min2 = ai;
            }
        }
        return min1 + min2;
    }
}
