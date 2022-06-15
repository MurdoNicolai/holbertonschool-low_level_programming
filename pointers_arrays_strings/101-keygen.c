/**
 *main - generate password for crackme
 *
 *Return - the key
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int password = 0, random, checksum;
	srand(time(NULL));
	checksum = 2772;
	while (checksum > 122)
	{
		random = (rand() % 100);
		printf("%c", random);
		checksum -= random;
		password++;
	}
	printf("%c", checksum);
	return (password);
}
