#include <stdio.h>

/**
 * main - prints out all combinations of two digit numbers
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(' ');
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);
			if (a != 98 || b != 99)
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
