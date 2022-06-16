#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 **string_toupper - upercase all char in string
 *
 *@str: str to upper
 *Return: new string
 */

char *string_toupper(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i <= len ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
