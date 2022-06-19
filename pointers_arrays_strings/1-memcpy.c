/**
 *_memcpy - cpy memeory frome 1 place to another
 *
 *@n: amount to bytes to fill
 *@dest: destination
 *@src: source
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];
	return (src);
}
