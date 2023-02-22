#include "main.h"

/**
 * _isalpha - prints uppercase or lowercase value if true
 * @c: parameter
 * Return: returns 1 or 0 depending on value of c
 */

int _isalpha(int c)
{
	if (c >= 61 && c <= 122)
		return (1);
	else
		return (0);
}
