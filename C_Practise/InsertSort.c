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