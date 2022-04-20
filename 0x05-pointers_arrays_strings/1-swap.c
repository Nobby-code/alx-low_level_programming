#include "main.h"

/**
 *swap_int - swap the value of integers
 *@a: first argument
 *@b: second argument
 *Return: no return (void)
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
