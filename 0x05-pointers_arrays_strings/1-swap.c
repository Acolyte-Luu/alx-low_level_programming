#include "main.h"
/**
* swap_int - swaps values of two integers
* @a: integer to be swapped
* @b: integer to be swapped
*/
void swap_int(int *a, int *b)
{
int ptr = *a;
*a = *b;
*b = ptr;
}
