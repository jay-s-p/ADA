#include <iostream>
using namespace std;
void sort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
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