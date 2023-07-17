#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog_t struct with copies of name and owner.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name of the dog.
 *
 * Return: Pointer to the new dog_t struct, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *new_name;
	char *new_owner;
	int name_len, owner_len;

	/* Calculate the length of the name and owner strings */
	name_len = strlen(name);
	owner_len = strlen(owner);

	/* Allocate memory for the new dog_t struct */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory and copy the name string */
	new_name = malloc((name_len + 1) * sizeof(char));
	if (new_name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_name, name);

	/* Allocate memory and copy the owner string */
	new_owner = malloc((owner_len + 1) * sizeof(char));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_owner, owner);

	/* Set the age, name, and owner fields of the new dog_t struct */
	new_dog_ptr->age = age;
	new_dog_ptr->name = new_name;
	new_dog_ptr->owner = new_owner;

	return (new_dog_ptr);
}

