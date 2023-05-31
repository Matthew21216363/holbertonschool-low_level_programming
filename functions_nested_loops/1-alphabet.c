#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - entry point thank you Sarah
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int m;

	for (m = 0; m < 26; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
