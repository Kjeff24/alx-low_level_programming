#include "main.h"

/**
 * change all bits counted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count_bit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count_bit++;
	}

	return (count_bit);
}
