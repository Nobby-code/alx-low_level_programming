#include "main.h"
#include <stdio.h>

/**
 *print_array - print array values
 *@a: first argument
 *@n: second argument
 *Return: Void if success
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
