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
	char str[strlen(s)];

	for (i = 0; i < strlen(s) ; i++)
		str[strlen(s) - i - 1] = s[i];
}
