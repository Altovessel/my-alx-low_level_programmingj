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
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long int));
	printf("%zu\n", sizeof(long long int));
	printf("%zu\n", sizeof(float));
	return (0);
}
