/**
 * *_strncat - appends part of string to another
 *
 *@dest: destination
 *@src: string to append
 *@n: amount of src to append
 *Return: dest
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *_strncat(char *dest, char *src, int n)
{
	int lensrc = strlen(src);
	int i;
	int lendest = strlen(dest);

	for (i = 0; (i < n) && (i < lensrc); i++)
	{
		*(dest + lendest + i) = src[i];
	}
	return (dest);
}
