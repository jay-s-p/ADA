class SelectionSort {
    static void sort(int a[]) {
        int n = a.length;
        int min, temp;
        for (int i = 0; i < n - 1; i++) {
            min = i;
            for (int j = i; j < n; j++) {
                if (a[j] < a[min]) {
                    min = j;
                }
            }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
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