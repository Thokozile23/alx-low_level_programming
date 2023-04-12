#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - writes pointer to newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *nnn;

	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')

		i++;

	nnn = malloc(sizeof(char) * (i + 1));

	if (nnn == NULL)

		return (NULL);

	for (j = 0; str[j]; j++)

		nnn[j] = str[j];

	return (nnn);
}
