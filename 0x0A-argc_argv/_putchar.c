#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c: Character to be printed
 *
 * Return: 0 on success
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
