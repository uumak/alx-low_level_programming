#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * followed by a new line
 *
 * Return: Always 0 (Success)
 *
 **/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
