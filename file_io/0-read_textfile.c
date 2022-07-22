
#include<stdio.h>

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
	while (c != EOF)
	{
		c = fgetc(in);
		count =	write(1, c, 1);
	}
	fclose(in);
	return (count);
}
