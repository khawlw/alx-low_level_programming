#include "main.h"

/**
 * Print_alphabet - this is the function for this task.
 * This function that prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
