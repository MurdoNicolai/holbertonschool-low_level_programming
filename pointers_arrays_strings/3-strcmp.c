#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 **_strcmp - compare 2 strings
 *
 *@s1: first string
 *@s2: string to compare to
 *Return: void
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for (i = 0; (i <= len1) && (i <= len2) ; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
