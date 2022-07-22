#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


/**
 *create_file - creates a file
 *@filename: name the file will have
 *@text_content: what will be in the file
 *Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int new; 

	new = open(filename,O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!filename || !new)
		return (-1);
	if (!text_content)
		text_content = "";
	fprintf(new, "%s", text_content);
	fclose(new);
	return (1);
}
