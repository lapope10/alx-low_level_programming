#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
*/

void print_alphabet(void)
{
	char letter;

	or (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
