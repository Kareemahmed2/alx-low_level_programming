#include "main.h"
/**
 * print_rev - reverse a word
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;

	while (s[longi] != '\0')
		longi++;

	while (longi)
		_putchar(s[--longi]);

	_putchar('\n');
}

