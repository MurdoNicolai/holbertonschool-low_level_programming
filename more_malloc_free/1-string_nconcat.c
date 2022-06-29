#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 *string_nconcat - initialises an aray of char with 2 strings
 *
 *@s1: first string in resulting array
 *@s2: second one but only n bytes
 *@n: amount of byts to take frome s2
 *Return: pointer to resulting array or NULL if fail
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int size1;
	unsigned int size2;
	unsigned int i;

	if (s1)
		size1 = strlen(s1);
	else
		size1 = 0;
	if (s2)
		size2 = strlen(s2);
	else
		size2 = 0;
	if (n < size2)
		size2 = n;
	array = (char *) malloc((size1 + size2 + 1) * sizeof(char));
	if (!array)
		return (NULL);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			array[i] = s1[i];
		else if (i < size1 + size2)
			array[i] = s2[i - size1];
	}
	array[i + 1] = 0;
	return (array);
}
