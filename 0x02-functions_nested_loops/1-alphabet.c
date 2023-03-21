#include "main.h"

/**
 * print_Alphabet - Write a function that prints the alphabe,
 * in lowercase, followed by a new line.
 * Return:void
*/

int main(void)
{
	print_alphabet();
	{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
	return (0);
	}
}
