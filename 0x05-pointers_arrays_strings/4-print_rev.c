#include"main.h"

/**
 * print_rev - prints a string in rev.
 *
 * @s: string parameter input
 *
 * Return: no
 */

void print_rev(char *s)
{
	int index;

	/*finds the length of string without null character*/
	for (index = 0; s[index] != '\0'; ++index)
		;
	/*print char from the last index as you decrement*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
