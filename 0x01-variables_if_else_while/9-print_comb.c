#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);

		if (j != 57)

		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
