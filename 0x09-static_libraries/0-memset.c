#include "main.h"

/**
 * _memset - first n bytes of the memory pointed
 * to by @s with the constant byte @c.
 * @s: pointer to the memory area
 * @c: character to fill the memory area
 * @n: number of bytes to be filled
 * description _memset: over
 *
 * Return: Pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
