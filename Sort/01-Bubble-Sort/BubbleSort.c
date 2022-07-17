#include <stdio.h>
#include <conio.h>
void sort(int a[], int n)
{
	int i, j, temp, flag = 0;
	for (i = 0; i < n - 1; i++)
	{
		flag = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
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