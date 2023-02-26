#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * @a - parameter to use
 *
 * @n - number of times to print the numbers
 *
 * Return - No return
 */
void more_numbers(void)
{
	int a, n;

	for (a = 0; a < 10; a++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n < 10)
			{
				_putchar('n');
			}
			else
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
