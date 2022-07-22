/**
 *get_bit - gts a bit at given index
 *@n: number to check
 *@index: bit to get
 *Return: the value
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64 || index < 0)
		return (-1);
	return ((n >> index) % 2);
}
