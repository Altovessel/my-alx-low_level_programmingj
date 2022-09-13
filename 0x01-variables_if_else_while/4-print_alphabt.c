#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 *
 * Description: using main, this program
 * prints all lowercase alphabets except q and e
 *
 * Return: 0 (Always success)
 */
int main(void)
{
		int i;

		for (i = 97; i < 123; i++)
		{
			if (i != 101 && i != 113)

			putchar(i);
		}

			putchar('\n');
	return (0);
}
