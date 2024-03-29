#include "main.h"
/**
 * clear_bit - Sets a bit to 0
 * @n: Number
 * @index: Index to be cleared
 * Return: 1 on success or -1 on failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);

*n &= ~(1 << index);
return (1);
}
