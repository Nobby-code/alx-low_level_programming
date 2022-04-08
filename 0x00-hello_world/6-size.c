#include <stdio.h>
/**
 *main - entry point of the program
 *
 *Return: 0 after printing the function 
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d bytes(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long));
printf("size of a long long int: %d byte(s)\n", sizeof(long long));
printf("Size of a float: %d byte(s)\n", sizeof(double));
return (0);
}
