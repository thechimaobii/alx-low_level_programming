#include "main.h"

/**
 * _islower - prints lowercase value if true
 * @c: parameter
 * Return: returns 1 or 0 depending on value of c
 */

int _islower(int c)
{
	if (c >= 97 && c >= 122)
		return (1);
	else
		return (0);
}
