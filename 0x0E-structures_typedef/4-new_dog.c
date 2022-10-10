#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: it's age
 * @owner: the name of the owner
 *
 * Return: a dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));
	
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
