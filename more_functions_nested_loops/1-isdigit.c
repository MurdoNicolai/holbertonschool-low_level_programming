/**
 *_isdigit - return 1 if digit, 0 otherwise
 *
 *@c: caracter to test
 *
 *Return: 1 or 0
 */

#include "main.h"
#include <ctype.h>

int _isdigit(int c)
{
	return (isdigit(c));
}
