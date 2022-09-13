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
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)

	{
		putchar(alp[i]);
		putchar(ALP[i]);
	}

		putchar('\n');

		return (0);
}
