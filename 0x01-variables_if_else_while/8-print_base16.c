#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
