#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets in lowercase
 *
 * ten times
 *
 * followed by a new line
 *
 * Return: Always 0 (Success)
 *
 **/
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			putchar(y);
		}
		putchar('\n');
	}
}
