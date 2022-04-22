#include "main.h"

/**
 *reverse_array - to reverse array
 *@a: pointer argument
 *@n: second argument
 *Return: void means success
 *
 */

void reverse_array(int *a, int n)
{
	int *p, aux, i, k;

	p = a;
	for (i = 1; i < n; i++)
	{
		p++;
	}
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
