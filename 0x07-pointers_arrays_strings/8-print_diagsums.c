#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - printing sums
 *@a: first argument
 *@size: second argument
 *
 *Return: void means nothing
 */

void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(sum + 1) * b];
		sum2 += a[(sum - 1) * (b + 1)];
	}
	printf("%d %d\n", sum1, sum2);
}
