#include "main.h"

/**
 * return an index of bit value in decimal
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val_dec;

	if (index > 63)
		return (-1);

	bit_val_dec = (n >> index) & 1;

	return (bit_val_dec);
}
