#include "main.h"

/**
 * malloc_checked - array to prints a string
 * @c: number of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		return (a);
	}
}
