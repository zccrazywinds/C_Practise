#include "InsertSort.h"

int InsertSort(int num[], int n)
{
	int temp;
	int j;
	for (int i = 1; i < n; i++)
	{
		temp = num[i];
		j = i - 1;
		while (j >= 0 &&  temp < num[j])
			num[j + 1] = num[j--];
		num[j + 1] = temp;
	}
}
void SelectSort(int num[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (num[min] > num[j])
				min = j;
		}
		if (min != i)
		{
			temp = num[min];
			num[min] = num[i];
			num[i] = temp;
		}
	}
}

void BubbleSort(int num[], int n)
{
	int temp;
	for (int i = n; i >0; i--)
	{
		for (int j =0; j <=i;  j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
}