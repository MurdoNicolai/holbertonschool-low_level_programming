/**
 * *_strcat - appends a string to another
 *
 *@dest: destination
 *@src: string to append
 *Return: dest
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *_strcat(char *dest, char *src)
{
	int lensrc = strlen(src);
	int i;
	int lendest = strlen(dest);

	for (i = 0; i <= lensrc; i++)
	{
		*(dest + lendest + i) = src[i];
	}
	return (dest);
}
