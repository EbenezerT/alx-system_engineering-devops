#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function to update pointer variable
 * @n: Parameter to update
 */

void reset_to_98(int *n)
{
	int updated;

	updated = 98;
	*n = updated;
}
