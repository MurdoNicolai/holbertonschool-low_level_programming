/**
 *get_bit - gts a bit at given index
 *@n: number to check
 *@index: bit to get
 *Return: the value
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int one = 1;
	n = (one << index) & n;
	return (n > 0);
}


/**
 * flip_bits - how many bitflips to change 1 number to another?
 * @n: first number
 * @m: second number
 * Return: amount of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int res = 0;

	for (i = 0; i < 64; i++)
	{
		if (get_bit(n ^ m, i))
			res++;
	}
	return (res);
}
