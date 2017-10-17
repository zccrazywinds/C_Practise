#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "main.h"
void print(char Array[], int  n);
int main()
{
	int a = 4, b = 10;
	int i = 0;
	
	for (i = a; i > 0; i--)
	{
		if ((b%i == 0) && (a%i == 0))
			break;
	}
	printf("最大公约数为%d \n", i);
	for (i = b; ; i++)
	{
		if ((i%a == 0) && (i%b == 0))
			break;
	}
	printf("最小公倍数为%d \n", i);
	getch();
	return 0;
}

