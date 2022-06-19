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
		test = 1;
		for (i = 0; needle[i] && test != 0; i++)
		{
			if (haystack[n + i] != needle[i])
				test = 0;

		}
		if (test == 1)
			return (haystack + n);
	}
	return (NULL);
}
