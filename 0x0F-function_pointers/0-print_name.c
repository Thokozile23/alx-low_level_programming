#include "function_pointers.h"
#include <stdio.h>
/*
* print_name - print name using pointer to function
* @name: string to add
* @f: pointer to function
* description: the pointer f will be used to print the name that will be added
* the code must return a name
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
