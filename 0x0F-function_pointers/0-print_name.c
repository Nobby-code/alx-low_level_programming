#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - function to print the name
 *@name: the name to be printed
 *@f: pointer function
 *
 * Return: return void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
