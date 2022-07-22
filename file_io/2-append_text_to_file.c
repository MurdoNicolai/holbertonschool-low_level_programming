#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


/**
 *append_text_to_file - what it says
 *@filename: name of the file
 *@text_content: what will appended
 *Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *new;

	if (!fopen(filename, "r"))
		return (-1);
	new = fopen(filename, "a");
	if (!filename || !new)
		return (-1);
	if (!text_content)
		text_content = "";
	fprintf(new, "%s", text_content);
	fclose(new);
	return (1);
}
