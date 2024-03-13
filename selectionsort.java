import java.util.Arrays;

public class selectionsort  {
    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static void selsort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int k = i;
            for (int j = i + 1; j < n; j++)
                if (arr[j] < arr[k])
                    k = j;
            swap(arr, k, i);
        }
    }

    static void array(int[] arr) {
        System.out.println(Arrays.toString(arr));
    }

    public static void main(String[] args) {
        int[] arr = {10, 5, 6, 2, 3, 7};
        selsort(arr);
        System.out.println("Sorted array: ");
        array(arr);
    }
}
