#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
int main()
{
	int num[10] = { 2, 5,6,3,7,8,0,9,12,1 };
	printf("ԭʼ��������:\n");
	for (int i = 0; i < 10; i++)
		printf("%d  ", num[i]);
	SelectSort(num, 10);
	printf("\n����������:\n");
	for (int i = 0; i < 10; i++)
		printf("%d  ", num[i]);
	getche();
	return 0;
}