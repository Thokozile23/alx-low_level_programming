#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with constant byte
 * @s: memory address to be filled
 * @b: char to be filled
 * @n: size of byte to be filled by value b
 *
 * Return: pointer to the memory address s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
