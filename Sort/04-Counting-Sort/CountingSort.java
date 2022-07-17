class CountingSort {
    static void sort(int a[]) {

        // declare array length n + new output array(x) + max variable

        int n = a.length, x[] = new int[n], max = 0;

        // find max
        for (int i = 0; i < n; i++) {
            if (a[i] > max)
                max = a[i];
        }
        ++max; // because array start from 0

        // declare count array
        int c[] = new int[max];

        // set all c array value to 0
        for (int i = 0; i < max; i++)
            c[i] = 0;

        // assign count to count array
        for (int i = 0; i < n; i++) {
            ++c[a[i]];
        }

        // addition in count array
        for (int i = 0; i < max - 1; i++) {
            c[i + 1] += c[i];
        }

        // main logic
        for (int i = 0; i < n; i++) {
            x[c[a[i]] - 1] = a[i];
            --c[a[i]];
        }

        for (int i = 0; i < n; i++)
            a[i] = x[i];
    }

    static void printArray(int a[]) {
        for (int i = 0; i < a.length; i++)
            System.out.print(a[i] + " ");
        System.out.println();
    }

    public static void main(String args[]) {
        int a[] = { 1, 4, 1, 2, 9, 5, 2 };
        System.out.println("\nOriginal array :");
        printArray(a);

        sort(a);

        System.out.println("\nSorted array :");
        printArray(a);
    }
}