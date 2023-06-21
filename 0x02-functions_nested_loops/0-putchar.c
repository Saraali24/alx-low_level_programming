#include "main.h"

/**
 * main - Print _putchar
 * Return: Always 0
 */

int main(void)
{
	char str[] = "_putchar";
	int d;

	for (d = 0; d < 8; d++)
		_putchar(str[d]);

	_putchar('\n');

	return (0);
}
