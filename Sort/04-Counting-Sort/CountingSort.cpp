#include <iostream>
using namespace std;
void sort(int a[], int n)
{
    // declare new output array(x) and max variable
    int x[n], max = 0;

    // find max
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    ++max; // because array start from 0

    // declare count array
    int c[max];

    // set all c array value to 0
    for (int i = 0; i < max; i++)
        c[i] = 0;

    // assign count to count array
    for (int i = 0; i < n; i++)
    {
        ++c[a[i]];
    }

    // addition in count array
    for (int i = 0; i < max - 1; i++)
    {
        c[i + 1] += c[i];
    }

    // main logic
    for (int i = 0; i < n; i++)
    {
        x[c[a[i]] - 1] = a[i];
        --c[a[i]];
    }

    for (int i = 0; i < n; i++)
        a[i] = x[i];
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

main()
{
    int a[] = {1, 4, 1, 2, 9, 5, 2}, n = 7;
    cout << "Original array : ";
    printArray(a, n);

    sort(a, n);

    cout << "\nSorted array : ";
    printArray(a, n);
}