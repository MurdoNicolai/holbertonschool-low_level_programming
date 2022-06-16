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
	int sum1 = 0;
	int sum2 = 0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for (i = 0; i <= len1 ; i++)
		sum1 += s1[i];
	for (i = 0; i <= len2 ; i++)
		sum2 += s2[i];
	return (sum1 - sum2);
}
