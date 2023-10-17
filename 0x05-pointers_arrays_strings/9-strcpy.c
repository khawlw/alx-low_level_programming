#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * gdest: char type string
 * gsrc: char type string
 * Descrption: Copy the string pointed to by pointer 'src' to
 * the buffer pointed to by 'dest'
 * Return; Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
