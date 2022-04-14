#include <stdio.h>
/**
 *main - Entry point of the program
 *@void: no argument
 *Return: Always 0
 *
 */
int main(void)
{
	int i;
	int max = 100;

	i = 1;
	while (i <= max)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < max)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%i", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}

