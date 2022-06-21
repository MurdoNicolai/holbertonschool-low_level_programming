#include "main.h"


/**
 *compare - compares 2 strings
 *
 *@n1: caracter being tested frome S1
 *@n2: caracter being tested frome s2
 *@s1: string 1
 *@s2: string 2 can contain * standing for any caracter
 *@c: optional caracter
 *Return: 1 if identical, 2 otherwise
 */

int compare(char *s1, char *s2, int n1, int n2, char c)
{
	if (!(s2[n2]))
	{
		if (c == '*')
			return (1);
		if (!(s1[n1]))
			return (1);
		return (0);
	}

	if (s2[n2] == '*')
	{
		return (compare(s1, s2, n1, n2 + 1, '*'));
	}

	if (s1[n1] != s2[n2])
	{
		if (c == 7)
			return (0);
		if (c == '*')
			return (compare(s1, s2, n1 + 1, n2, '*'));
		return (compare(s1, s2, n1, n2 + 1, 7));
	}

	if (c == 7)
		return (compare(s1, s2, n1 + 1, n2 + 1, 7));
	if (c == '*' || c == s1[n1])
		return (compare(s1, s2, n1 + 1, n2, s2[n2]));
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
	return (compare(s1, s2, 0, 0, 7));
}
