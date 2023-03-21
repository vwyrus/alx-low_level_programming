#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char me;

	for (me = 'a'; me <= 'z'; me++)
		_putchar(me);
	_putchar('\n');
}
