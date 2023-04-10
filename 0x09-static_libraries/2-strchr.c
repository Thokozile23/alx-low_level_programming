#include "main.h"
#include <string.h>
/**
 * _strchr - finds first occurence of character in a string
 * @s: string to be found
 * @c: character to be located
 *
 * Return: If c is located - a pointer to the first occurence.
 * if c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
        int i;

        for (i = 0; s[i] >= '\0'; i++)
        {
                if (s[i] == c)
                        return (s + i);
        }
        return ('\0');
}
