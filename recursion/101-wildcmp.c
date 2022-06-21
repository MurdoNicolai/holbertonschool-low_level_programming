#include "main.h"


/**
 *compare - compares 2 strings
 *
 *@n1: caracter being tested frome S1 "0"
 *@n2: caracter being tested frome s2 "0"
 *@s1: string 1
 *@s2: string 2 can contain * standing for any caracter
 *@c: check for * "0"
 *Return: 1 if identical, 2 otherwise
 */

int compare(char *s1, char *s2, int n1, int n2, int c)
{
	if (!(s2[n2]))
	{
		if (c == 1)
			return (1);
		if (!(s1[n1]))
			return (1);
		return (0);
	}

	if (s2[n2] == '*')
	{
		return (compare(s1, s2, n1, n2 + 1, 1));
	}

	if (s1[n1] != s2[n2])
	{
		if (c == 0)
			return (0);
		if (c == 1)
			return (compare(s1, s2, n1 + 1, n2, 1));
	}

	if (c == 1)
	{
		if (compare(s1, s2, n1 + 1, n2, 1))
			return (1);
	}
	return (compare(s1, s2, n1 + 1, n2 + 1, 0));
}








/**
 *wildcmp - compares 2 strings
 *
 *@s1: string 1
 *@s2: string 2 can contain * standing for any caracter
 *Return: 1 if identical, 2 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	return (compare(s1, s2, 0, 0, 0));
}
