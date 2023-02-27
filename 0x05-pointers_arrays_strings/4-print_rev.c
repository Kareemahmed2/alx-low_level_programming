#include "main.h"
/**
 * print_rev - reverse a word
 * @s: string
 * return: 0
 */
       int longi = 0;
       int o;

void print_rev(char *s)
{

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	for (o = longi; o >= 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
