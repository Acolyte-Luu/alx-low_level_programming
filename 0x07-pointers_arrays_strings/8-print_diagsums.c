#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of diagonals in a square matrix
*@a: input pointer
*@size: size of matrix
*/
void print_diagsums(int *a, int size)
{
int i, sumx = 0, sumy = 0;
for (i = 0; i < (size * size); i++)
{
if (i % (size + 1) == 0)
sumx = sumx + *(a + 1);
if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
sumy = sumy + *(a + 1);
}
printf("%d, %d\n", sumx, sumy);
}
