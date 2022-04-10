import java.util.Scanner;

public class hello4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of first array: ");
        int n = sc.nextInt();

        int[] arr1 = new int[n];
        System.out.println("Enter the inputs of first array:");
        for (int i = 0; i < n; i++) {
            arr1[i] = sc.nextInt();
        }

        System.out.println("Enter the length of second array: ");
        int m = sc.nextInt();
        int[] arr2 = new int[m];
        System.out.println("Enter the inputs of second array: ");
        for (int i = 0; i < m; i++) {
            arr2[i] = sc.nextInt();
        }



        int[] arr3 = new int[n + m];
        int i;
        for (i = 0; i < arr1.length && i < arr2.length; i++) {
            arr3[i] = arr1[i] + arr2[i];
        }
        for (; i < arr1.length; i++) {
            arr3[i] = arr1[i];
        }
        for (; i < arr2.length; i++) {
            arr3[i] = arr2[i];
        }

        for (int j = 0; j < arr3.length; j++) {
            System.out.print(arr3[j]+"\t");
        }
    }
}
