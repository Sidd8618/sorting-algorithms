import java.util.Scanner;

public class bubblesort{
    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static void main(int arr[], int size) {
        int x = 0;
        do {
            int y = 0;
            do {
                if (arr[y] > arr[y + 1]) {
                    swap(arr, y, y + 1);
                }
                y++;
            } while (y < size - x - 1);
            x++;
        } while (x < size - 1);
    }

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int arr[] = new int[50];
            int n, x;
            System.out.println("Enter the Number of Elements array: ");
            n = scanner.nextInt();
            System.out.println("Enter the Elements: ");
            for (x = 0; x < n; x++)
                arr[x] = scanner.nextInt();
            main(arr, n);
            System.out.println("Array after bubble sort: ");
            for (x = 0; x < n; x++) {
                System.out.print(arr[x] + " ");
            }
        }
    }
}

