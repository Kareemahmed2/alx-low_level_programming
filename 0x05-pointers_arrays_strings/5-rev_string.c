#include"main.h"

/*
 * rev_string - writes a string in reverse
 * @s: input string
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int longi;
	while(*s != 0)
	{
		_putchar(s[longi]);
		longi++;
	}

	while(longi)
	{
		_putchar(s[--longi]);
	}
}
