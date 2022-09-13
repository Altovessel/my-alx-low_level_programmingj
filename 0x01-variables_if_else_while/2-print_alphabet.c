#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using main, this program prints
 * out the letters of the alphabet in lower case
 *
 * Return: 0
 */
int main(void)

{

	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;



	for (i = 0; i < 26; i++)

	{

		putchar(alp[i]);

	}

	putchar('\n');

	return (0);
}
