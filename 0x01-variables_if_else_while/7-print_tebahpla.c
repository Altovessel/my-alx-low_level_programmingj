#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using main, this program prints lower case letters in reverse
 *
 * Return: 0(Always success)
 */
int main(void)
{
	char alp[26];
	int i;

	for (i = 26; i >= 0; i--)
	{
		putchar(i);
	}

		putchar('\n');

		return (0);
}
