#include "main.h"
#include < stdio.h>

/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int n, i, s;

	s = 0;
	n = 0;

	while (n < 24)
	{
		i = 0;
		while (i < 60)
		{
			if (n < 10)
			{
				printf("%d %d", s, n);
			}
			else
			{
				printf("%d", n);
			}

			_putchar(':');

			if (i < 10)
			{
				printf("%d %d", s, i);
			}
			else
				printf("%d", i);

			_putchar("\n");

			i++;
		}

		n++;
	}
}
