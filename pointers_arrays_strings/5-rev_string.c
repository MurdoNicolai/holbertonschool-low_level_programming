#include <string.h>
#include <stdio.h>

/**
 *rev_string - reverse a string
 *
 *@s: string to reverse
 *Return: void
 */

void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	char str[0];

	for (i = 0; i < len ; i++)
		strncat(str, s, len);
}
