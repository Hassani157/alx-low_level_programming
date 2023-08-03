#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string containing the binary number.
 *
 * Return: The converted number as an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int dec_val = 0;

    /* Check if the input string is NULL. */
    if (!b)
	    return (0);

    /* Iterate through the binary string to calculate the decimal value. */
    for (i = 0; b[i]; i++)
    {
	    /* Validate each character of the binary string. */
	    if (b[i] < '0' || b[i] > '1')
		    return (0);

	/* Convert the binary to decimal using bit shifting. */
	dec_val = (dec_val << 1) | (b[i] - '0');
    }

    /* Return the converted decimal value as an unsigned int. */
    return (dec_val);
}
