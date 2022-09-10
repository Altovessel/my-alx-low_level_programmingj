#include <stdio.h>

/**
 * main - the entry point
 * sizeof - prints the size of various data types
 *
 * Description: using the main and size of functions, this program prints out
 * the sizes of various data types
 *
 * Return: 0
 */
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long int));
	printf("%lu\n", sizeof(long long int));
	printf("%lu\n", sizeof(float));
	return (0);
}
