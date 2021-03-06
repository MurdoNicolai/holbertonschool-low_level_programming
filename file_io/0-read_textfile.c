
#include<stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and posts it to standard output
 * @filename: file to read
 * @letters: amount of letters to print
 * Return: number of letters printed
*/



ssize_t read_textfile(const char *filename, size_t letters)
{
	int count = 0;
	FILE *in = fopen(filename, "r");
	char c;

	if (!filename || !in)
		return (0);
	c = fgetc(in);
	while (c != EOF && letters > 0)
	{
		count += write(STDOUT_FILENO, &c, 1);
		letters--;
		c = fgetc(in);
	}
	fclose(in);
	return (count);
}
