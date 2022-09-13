#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this program  prints the alphabet in lowercase
 * and then in uppercase
 * Return: 0
 */
int main(void)
{
	char c;
	char d;

	for
	(c = 'a';
	c <= 'z';
	c++);
	(d = 'A';
	d <= 'Z';
	d++);
	{
		putchar("The lowercase and uppercase alphabets are :\n");
		putchar("%c\n", c);
		putchar("%c\n", d);
	}
	return (0);
}
