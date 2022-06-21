#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *palindrome - test if palindrome
 *
 *@s: string to test
 *@x: number of caracter in string being test
 *Return: 1 if palindrome 0 otherwise
*/

int palindrome(int x, char *s)
{
	if (!*s)
		return (1);
	if (*s + x == *s + strlen(s) - x - 1)
		return (0);
	return (palindrome(x + 1, s));
}

/**
 * is_palindrome - is a number palindrome
 *
 *@s: string to test
 *Return: 1 if true, 0 if not
 */




int is_palindrome(char *s)
{
	return (palindrome(0, *s));
}
