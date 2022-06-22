#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 **_strncpy - copy a string
 *
 *@dest: destination
 *@src: source
 *@n: number of digits
 *Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = strlen(src);

	for (i = 0; (i <= len) && (i < n); i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
