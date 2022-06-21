#include "main.h"

/**
 *count - counts caracters
 *@s: string to count
 *@c: count
 *Return: count
 */

int count(char *s, int c)
{
	if (*s)
		return (_strlen_recursion(s + 1, c + 1));
	return (c);
}


/**
 *_strlen_recursion - string length
 *
 *@s: string to print
 *Return: void
 */



int _strlen_recursion(char *s)
{
	return (count(s, 0));
}
