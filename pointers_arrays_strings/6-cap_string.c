#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 **cap_string - upercase first char in word
 *
 *@str: str to upper
 *Return: new string
 */

char *cap_string(char *str)
{
	int i;
	int w;
	int len = strlen(str);
	int word = 1;
	int seperator[13] = {9, 10, 20, 21, 22, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; i <= len ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && word == 1)
		{
			str[i] = str[i] - 32;
		}
		word = 0;
		w = 0;
		while (word == 0 || w < 13)
		{
			if (str[i] == seperator[w])
				word = 1;
			w++;
		}
	}
	return (str);
}
