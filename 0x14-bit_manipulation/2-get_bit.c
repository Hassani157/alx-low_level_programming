#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a given index in a decimal number.
 * @n: The decimal number to search.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value (0 or 1) of the bit at the specified index.
 *         Returns -1 if the index is out of range (greater than 63).
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int bit_val;

    /* Check if the index is within the valid range (0 to 63). */
    if (index > 63)
	    return (-1);

    /* Right-shift the number 'n' by the index and retrieve the bit at that position. */
    bit_val = (n >> index) & 1;

    /* Return the value of the bit at the specified index. */
    return (bit_val);
}
