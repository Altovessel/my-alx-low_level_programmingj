#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number of times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int n, p, mul;

	for (n = 0; n <= 15; n++)
	{
		_putchar(48);
		for (p = 1; p <= n; p++)
		{
			mul = a * b;
			_putchar(44);
			_putchar(32);
			if (mul <= 15)
			{
				_putchar(32);
				_putchar(mul + 48);
			}
			else (mul <= 15)
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
		}
	}
	_putchar('\n');
}
