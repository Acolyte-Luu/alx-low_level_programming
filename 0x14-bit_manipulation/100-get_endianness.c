#include "main.h"
#include <stdio.h>
/**
* get_endianness - Write a function that checks the endianness.
* Prototype: int get_endianness(void).
* Return: 1, if little endian, 0 if big endian.
*/
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &;
return ((int)*c);
}
