class BubbleSort {
    static void sort(int[] a) {
        int n = a.length;
        boolean flag = false;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    a[j] = a[j] + a[j + 1];
                    a[j + 1] = a[j] - a[j + 1];
                    a[j] = a[j] - a[j + 1];
                    flag = true;
                }
            }
            if (!flag) {
                System.out.println("LOL");
                break;
            }
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