/**
 *main - generate password for crackme
 *
 *Return - 0
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int random, checksum;
	srand(time(NULL));
	checksum = 2772;
	while (checksum > 100)
	{
		random = (rand() % 99) + 1;
		printf("%c", random);
		checksum -= random;
	}
	printf("%c", checksum);
	return (0);
}
