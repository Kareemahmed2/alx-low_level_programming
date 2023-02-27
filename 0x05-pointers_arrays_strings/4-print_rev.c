#include "main.h"
/**
 * print_rev - reverse a word
 * @p: string
 * return: 0
 */
void print_rev(char *p)
{
	int longi = 0;
	int o;

	while (*p != '\0')
	{
		longi++;
		p++;
	}
	p--;
	for (o = longi; o => 0; o--)
	{
		_putchar(*p);
		p--;
	}

	_putchar('\n');
}
