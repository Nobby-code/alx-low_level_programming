#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -  function that prints from a given number to 98
 *
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(44);
			}
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(',');
			}
		}
	}
	printf('\n');
}
