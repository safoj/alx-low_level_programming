#include "main.h"
/**
 * print_alphabet_x10-prints 10 times the alphabet in lowercase.
 * return:0 if error
 */
void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k < 10; k++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
