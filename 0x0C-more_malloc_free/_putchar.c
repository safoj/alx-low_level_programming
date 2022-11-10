#include <unistd.h>

/**
 * _putchar - character c to stdout
 * @c: character to print
 *
 * Return: success 1
 * error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
