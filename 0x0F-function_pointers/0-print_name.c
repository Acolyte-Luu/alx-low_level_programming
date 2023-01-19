#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - function prints a name using function pointers
* @name: String to print
* @f: Function pointer
* Return: function pointer to print name
*/
void print_name(char *name, void (*f)(char *))
{
if (f)
{
(*f)(name);
}
}
