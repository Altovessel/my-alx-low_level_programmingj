#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: using main, this program prints all
 * single digit numbers of base 10 from 
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
