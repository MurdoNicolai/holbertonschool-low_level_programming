#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *main - copy content of file into another
 *@argc: number of argument should be 2
 *@argv: contains name of files frome then too
 *Return: 1
 */

int main(int argc, char *argv[])
{
	FILE *frome, *too;
	int i = -1;
	char buffer[1025];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	too = fopen(argv[2], "w");
	frome = fopen(argv[1], "r");
	if (!frome)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	do {
		i++;
		buffer[i] = fgetc(frome);
		if (i >= 1023)
		{
			buffer[i + 1] = '\0';
			fprintf(too, "%s", buffer);
			i = -1;
		}
	} while (buffer[i] != EOF);
	buffer[i] = '\0';
	fprintf(too, "%s", buffer);
	if (!too)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fclose(too) == EOF)
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(too));
	else if (fclose(frome) == EOF)
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(frome));
	else
		return (1);
	exit(100);
}
