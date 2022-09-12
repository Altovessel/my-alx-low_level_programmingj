#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using main, the program prints out random values of n
 * and states if its positive, zero or negative
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if ((n % 10) == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}

	return (0);
}
