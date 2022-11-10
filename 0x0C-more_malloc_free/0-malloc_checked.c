#include "main.h"

/**
 * malloc_checked - array to prints a string
 * @c: number of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		return (p);
	}
}
