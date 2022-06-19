/**
 *set_string - change value of pointer to point elsewhere
 *
 *@s: pointer to change
 *@to: location it should point to
 *Return: void
 */


void set_string(char **s, char *to)
{
	*s = to;
}
