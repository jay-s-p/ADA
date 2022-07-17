#include <stdio.h>
#include <conio.h>

void sort(int a[], int n)
{
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
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