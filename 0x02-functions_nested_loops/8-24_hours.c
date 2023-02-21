#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: the last digit of the integer Always (Success)
 */
void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar((h - (h % 10)) / 10 + 48);
			_putchar((h % 10) + 48);
			_putchar(58);
			_putchar((m - (m % 10)) / 10 + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
