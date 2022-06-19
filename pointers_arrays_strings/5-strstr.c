#include <stddef.h>
#include <stdio.h>
/**
 *_strstr - finds first occurance of word in string
 *
 *@haystack: string to test
 *@needle: word to find
 *Return: location of needle
 */

char *_strstr(char *haystack, char *needle)
{
	int n;
	int i;
	int test;

	for (n = 0; haystack[n]; n++)
	{
		test = 0;
		for (i = 0; needle[i] && test != -1; i++)
		{
			if (haystack[n + i] == needle[i])
				test = 1;
			else
				test = -1;
		}
		if (test == 1)
			return (haystack + n);
	}
	return (NULL);
}
