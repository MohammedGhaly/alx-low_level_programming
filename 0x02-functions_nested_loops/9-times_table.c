#include "main.h"

/**
 * times_table - prints the times table from 1 to 9
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int f = 0;
	int s = 0;
	int r = 0;

	while (f < 10)
	{
		while (s < 10)
		{
			r = f * s;
			if (r > 9)
			{
				_putchar(32);
				_putchar(((r - (r % 10)) / 10 + 48));
				_putchar((r % 10) + 48);
				if (s != 9)
				{
					_putchar(44);
				}
			}
			else
			{
				if (s != 0)
				{
					_putchar(32);
					_putchar(32);
				}
				_putchar(48 + r);
				if (s != 9)
				{
					_putchar(44);
				}
			}
			s++;
		}
		_putchar('\n');
		s = 0;
		f++;
	}
}
