#include "main.h"
#include <unistd.h>
/**
 * main - print
 *
 * Return: need number
 */
int main(void)
{
	char c[] = "_putchar";
	int m;

	for (m = 0; m < 8; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');

	return (0);
}
