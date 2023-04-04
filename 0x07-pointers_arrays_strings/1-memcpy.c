#include "main.h"
#include <string.h>

/**
 * _memcpy - Function that copies bytes from one memory address to another
 * @n: size of bytes to be copied
 * @src: source of bytes from memory address being copied
 *
 * @dest: where bytes are being copied into a memory address
 *
 * Return: a pointer to @dest address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
