#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void sort(int a[], int n)
{
	// declare count(c) new output array(x)
	int *x = (int *)malloc(sizeof(int) * n), *c;
	int i, max = 0;

	// find max
	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	++max; // because array start from 0

	// count array
	c = (int *)malloc(sizeof(int) * (max));

	// set all c array value to 0
	for (i = 0; i < max; i++)
		c[i] = 0;

	// assign count to count array
	for (i = 0; i < n; i++)
	{
		++c[a[i]];
	}

	// addition in count array
	for (i = 0; i < max - 1; i++)
	{
		c[i + 1] += c[i];
	}

	// main logic
	for (i = 0; i < n; i++)
	{
		x[c[a[i]] - 1] = a[i];
		--c[a[i]];
	}

	for (i = 0; i < n; i++)
		a[i] = x[i];
}

void printArray(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[] = {1, 4, 1, 2, 9, 5, 2}, n = 7;
	// clrscr();
	printf("Original arrray : \n");
	printArray(a, n);

	sort(a, n);

	printf("\n\nSorted arrray : \n");
	printArray(a, n);
	// getch();
	return 0;
}