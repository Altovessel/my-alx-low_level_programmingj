#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - this program adds positive numbers
 * @argc: argment count
 * @argv: array of argments passed
 *
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	
	if (argc <= 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("argv[%d] = %s\n", i, argv[i]);
		sum += atoi(argv[i]);
	}
	printf("Total = %d\n", sum);
	return (0);
}
