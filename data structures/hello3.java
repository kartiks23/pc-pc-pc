import java.util.Scanner;

import javax.print.event.PrintEvent;

public class hello3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        int max = arr[0];

        for (int j = 0; j < arr.length; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        for (int i = max; i > 0; i--) {
            for (int j = 0; j < arr.length; j++) {
                if (arr[j] < i) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }
            System.out.println();
        }

    }
}
