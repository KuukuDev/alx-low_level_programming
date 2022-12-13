#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
