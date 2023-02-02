#include "main.h"
#include <stdio.h>
/**
* get_endianness - return the endianness of the machine
*
* Return: 0 for big endian, 1 for little endian
*/
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &x;
return ((int )*c);
}
