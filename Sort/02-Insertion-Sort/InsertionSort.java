class InsertionSort {
    static void sort(int[] a) {
        int i, j, key;
        for (i = 1; i < a.length; i++) {
            key = a[i];
            j = i - 1;
            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }
    }

    static void printArray(int a[]) {
        for (int i = 0; i < a.length; i++)
            System.out.print(a[i] + " ");
        System.out.println();
    }

    public static void main(String args[]) {
        int a[] = { 2, 5, 1, 4, 3 };
        System.out.println("\nOriginal array :");
        printArray(a);

        sort(a);

        System.out.println("\nSorted array :");
        printArray(a);
    }
}