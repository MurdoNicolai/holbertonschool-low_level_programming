#include <string.h>
#include <stdio.h>
#include <stdlib.h>


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
	char *str = (char *) malloc(len);

	for (i = 0; i < len ; i++)
		str[len - i - 1] = s[i];
	strcpy(s, str);
}
