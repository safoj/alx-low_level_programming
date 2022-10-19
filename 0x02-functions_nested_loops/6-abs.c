#include "main.h"
/**
 * _abs-prints the absolute value of an integer.
 * @a:integer to compute its absolute value.
 * Return:abs value
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
