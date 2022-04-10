import java.util.Scanner;
import java.math.*;

public class hello5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of first array: ");
        int n = sc.nextInt();
        int[] a = new int[n];
        System.out.println("Enter the length of second array: ");
        int m = sc.nextInt();
        int[] b = new int[m];
        System.out.println("Enter the input of first array: ");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter the input of second array: ");

        for (int i = 0; i < m; i++) {
            b[i] = sc.nextInt();
        }
        int[] arr = new int[max(n, m)];
        int i = 0;
        for (; i < a.length && i < b.length; i++) {
            if (a[i] < b[i]) {
                a[i] += 10;
                a[i + 1] -= 1;
                arr[i] = a[i] - b[i];
            } else {
                arr[i] = a[i] - b[i];
            }
        }
        for (; i < a.length; i++) {
            arr[i] = a[i];
        }
        for (; i < b.length; i++) {
            arr[i] = b[i];
        }

        for (i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "\t");
        }
    }

    private static int max(int n, int m) {
        if (m > n)
            return m;
        else
            return n;
    }
}
