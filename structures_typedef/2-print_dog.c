#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: Prints name, age, and owner.
 * If any element is NULL, prints (nil) instead.
 * If d is NULL, prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
