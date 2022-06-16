#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 **rot13 - encodes to rot13
 *
 *@str: str to encode
 *Return: new string
 */

char *rot13(char *str)
{
	int i;
	int w;
	int len = strlen(str);
	char alpha[52] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char bet[52] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";


	for (i = 0; i < len ; i++)
	{
		for (w = 0; w < 52; w++)
		{
			if (str[i] == alpha[w])
				str[i] = bet[w];
		}
	}
	return (str);
}
