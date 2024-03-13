public class mergesort {
    public static void merge(int[] arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        int[] L = new int[n1];
        int[] R = new int[n2];
        for (int i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[m + 1+ j];
        int i = 0;
        int j = 0;
        int k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    public static void mergesort(int[] arr, int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;
            mergesort(arr, l, m);
            mergesort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }

    public static void array(int[] arr, int size) {
        for (int i=0; i < size; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

public static void main(String[] args) {
        int[] arr = {6,8,4,2,3,4,65,10,1};
        int n = arr.length;
        mergesort(arr, 0, n-1);
        System.out.println("Sorted array: ");
        array(arr, n);
    }
public String toString() {
    return "mergesort []";
}
}