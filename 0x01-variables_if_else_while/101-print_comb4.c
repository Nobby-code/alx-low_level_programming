#include <stdio.h>
/**
 *main - Prints any possible combination of three digits using putchar
 *
 *Return: Always returns 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i != j && j != k && k != i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar (',');
					putchar(' ');
				}
				
			}
		}
	}
putchar('\n');
return (0);
}
