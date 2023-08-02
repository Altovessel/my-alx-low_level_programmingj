#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - this program adds positive numbers
 * @argc: argment count
 * @argv: array of argments passed
 *
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char* argv[])
{
    int i, sum = 0;
    if(argc <= 1)
        printf("0\n");
    for(i=1; i < argc; i++)
    {
        if(argv[i] <= 0)
            printf("Error\n");
    }
    printf("argv[%d] = %s\n", i, argv[i]);
    sum += atoi(argv[i]);

    printf("Total = %d\n", sum);
    return (0);
}
