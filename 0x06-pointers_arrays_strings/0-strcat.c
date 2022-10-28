#include "main.h"
#include <stdio.h>

/**
 * strcat - Concatenate two strings
 *null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, b;

	while (dest[x])
	{
		x++;
	}

	for (b = 0; src[b] != 0; b++)
	{
		dest[x] = src[b];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
