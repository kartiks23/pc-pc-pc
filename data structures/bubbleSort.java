import java.util.*;

public class bubbleSort {
    public static void main(String[] args) {
        int[] arr = { 3, 52, 32, 1, 5234, 45342, 24, 342 };

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j + i < arr.length - 1; j++) {

                if (arr[j + 1] < arr[j]) {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "\t");
        }
    }
}
// time O(n^2)
// best time O(n) when already sorted
