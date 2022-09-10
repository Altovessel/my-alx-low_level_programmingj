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
	printf("Size of a char: %zu byte\(s\)\n", sizeof(char));
	printf("Size of an int: %zu byte\(s\)\n", sizeof(int));
	printf("Size of a long int: %zu byte\(s\)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte\(s\)\n", sizeof(long long int));
	printf("Size of a float: %zu byte\(s\)\n", sizeof(float));
	return (0);
}
