#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*jack_bauer - prints hours in a day
*
*Return: void
*/
void jack_bauer(void)
{
	/*init: print order "hour1number12" "number21number22", */
	int hour1;
	int hour2;
	int minute1;
	int minute2;

	for (hour1 = 0; (hour1 < 2) || (hour2 < 4); hour1++)
	{
		for (hour2 = 0; ((hour1 < 2) || (hour2 < 4)) && (hour2 < 10); hour2++)
		{
			for (minute1 = 0; minute1 < 6; minute1++)
			{
				for (minute2 = 0; minute2 < 60; minute2++)
				{
					_putchar(hour1 +'0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(minute1 + '0');
					_putchar(minute2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
