#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 48; n <= 9; n++)
	{
		outchar(n + 48);
	}
	putchar('\n');
	return (0);
}
