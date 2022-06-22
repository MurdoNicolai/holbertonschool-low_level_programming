#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 **_strcpy - copy a string
 *
 *@dest: destination
 *@src: source
 *Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i <= len ; i++)
		dest[i] = src[i];
	return (dest);
}
