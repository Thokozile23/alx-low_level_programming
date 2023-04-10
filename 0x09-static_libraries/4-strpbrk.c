#include "main.h"
#include <string.h>

/**
 * _strpbrk - looks in a string for individual sets of bytes
 * @s: The string to be searched.
 * @accept: The set of bytes to be found
 *
 * Return: a pointer to the byte in @s
 *  that matches one of the bytes in accept
 *  NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
        int i;

        while (*s)
        {
                for (i = 0; accept[i]; i++)
                {
                        if (*s == accept[i])
                                return (s);
                }
                s++;
        }
        return ('\0');
}
