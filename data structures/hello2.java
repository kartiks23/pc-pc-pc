import java.util.Scanner;

public class hello2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of entries");
        int x = -1;
        int[] a = new int[sc.nextInt()];
        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter the number you want to find: ");
        int f = sc.nextInt();
        for (int i = 0; i < a.length; i++) {
            if (a[i] == f) {
                x = i;
            }
        }
        if (x == -1) {
            System.out.println("The number was not present in the array.");
        } else {
            {
                System.out.println("The number was found at " + x + "th index.");

            }
        }

    }
}
