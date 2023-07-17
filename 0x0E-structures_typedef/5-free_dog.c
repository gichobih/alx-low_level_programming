#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t struct.
 * @d: Pointer to the dog_t struct to be freed.
 *
 * Description: This function frees the memory allocated for the
 *              name, owner, and the dog_t struct itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

