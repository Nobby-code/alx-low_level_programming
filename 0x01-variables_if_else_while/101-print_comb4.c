#include <stdio.h>
/**
 *main - Prints any possible combination of three digits using putchar
 *
 *Return: Always returns 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (i != j && j != k && k != i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
					{
						break;
					}
					putchar (',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
