#include <stdio.h>
#include "main.h"

int main(void)
{
	int x = 42;

	printf("Before: %d\n", x);
	reset_to_98(&x);
	printf("After: %d\n", x);

	return (0);
}
