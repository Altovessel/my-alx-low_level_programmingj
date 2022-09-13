#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: using main, this program prints all
 * single digit numbers of base 10 from 0
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
