#include <stdio.h>
/**
 *main - printing alphabet in reverse
 *
 *Return: 0 when the function runs successfully
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
