#include<iostream>
using namespace std;
void sort(int a[], int n)
{

    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
                swapped = true;
            }
        }
        if (!swapped)
            break;
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