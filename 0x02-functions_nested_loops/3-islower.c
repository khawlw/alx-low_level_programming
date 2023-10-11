#include "main.h"
/**
 * _islower - cheks for lowercase character
 * @c: The character to be checked
 * Description: chek for lowercase and return to 1 if c is lowercase or 0 if otherwise
 * Return 1 for lowercase character or 0 for anything else
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
