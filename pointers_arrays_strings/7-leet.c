#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 **leet - encodes to 1337
 *
 *@str: str to encode
 *Return: new string
 */

char *leet(char *str)
{
	int i;
	int w;
	int len = strlen(str);
	char maj[5] = {'A', 'E', 'O', 'T', 'L'};
	char min[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};


	for (i = 0; i < len ; i++)
	{
		for (w = 0; w < 5; w++)
		{
			if (str[i] == maj[w] || str[i] == min[w])
				str[i] = num[w];
		}
	}
	return (str);
}
