#include <iostream>
using namespace std;

void sort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

main()
{
    int a[] = {2, 5, 4, 1, 3}, n = 5;
    cout << "Original array : ";
    printArray(a, n);

    sort(a, n);

    cout << "\nSorted array : ";
    printArray(a, n);
}