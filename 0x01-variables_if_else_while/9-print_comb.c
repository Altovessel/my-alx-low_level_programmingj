#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}

	putchar(44);
	putchar(32);
	return (0);
}
