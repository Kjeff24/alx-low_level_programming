#include "main.h"
#include <unistd.h>
/**
 * writex c character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
