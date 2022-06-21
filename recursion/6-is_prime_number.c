#include "main.h"
/**
 *prime - test if prime
 *
 *@n: number to test
 *@x: minimum prime
 *Return: if prime
*/

int prime(int x, int n)
{
	if (x * x > n)
		return (0);
	if (n % x == 0)
		return (1);
	return (prime(x + 1, n));
}

/**
 * is_prime_number - is a number prime
 *
 *@n: number to test
 *Return: 1 if true, 0 if not
 */




int is_prime_number(int n)
{
	return (prime(0, n));
}
