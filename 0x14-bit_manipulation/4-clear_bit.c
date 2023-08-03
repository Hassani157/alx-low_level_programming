#include "main.h"

/**
 * clear_bit - Sets the value of a specific bit to 0 in a decimal number.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear (0-based index).
 *
 * Return: 1 if the bit is successfully cleared, -1 for failure (index out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    /* Check if the index is within the valid range (0 to 63). */
    if (index > 63)
	    return (-1);

    /* Clear the bit at the specified index by using bitwise operations. */
    *n = (~(1UL << index) & *n);

    /* Return 1 to indicate successful bit clearing. */
    return (1);
}

