#include <stdio.h>
#include <conio.h>

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
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void main()
{
	int a[] = {2, 5, 4, 1, 3}, n = 5;
	// clrscr();
	printf("Original arrray : \n");
	printArray(a, n);

	sort(a, n);

	printf("\n\nSorted arrray : \n");
	printArray(a, n);
	// getch();
}