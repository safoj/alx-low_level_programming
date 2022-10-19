#include "main.h"
/**
 * print_alphabet-print the alphabet in lowercase.
 * Return:0 if error
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
