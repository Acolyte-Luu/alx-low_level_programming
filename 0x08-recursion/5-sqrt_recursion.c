#include "main.h"
/**
*_sqrt_recursion - return the natural squareroot of a number
*@n: int
*Return: return natural square root, else return -1
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
*_sqrt - helper function
*@x: int to determine squareroot
*@j: incrementer
*Return: square root
*/
int _sqrt(int x, int j)
{
int sq;
sq = j * j;
if (sq == x)
return (j);
else if (sq < x)
return (_sqrt(x, j + 1));
else
return (-1);
}
