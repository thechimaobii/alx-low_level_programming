#include "main.h"

/**
 * _abs - computes absolute number
 * @a: parameter
 * Return: returns a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else
		a = a;
	return (a);
}
