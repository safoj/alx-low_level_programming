#include "main.h"

/**
 * *_strcpy - copies the string pointed
 * to by src, including the terminating null byte
 * to the buffer poinednto to by dest
 * @dest: points to buffer
 * @src: points to string
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *answer = dest;

	while (*src)
	{
		*dest = *src:
			dest++;
		src++;
	}
	*dest = '\0';
	return (answer);
}
