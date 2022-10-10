#include "dog.h"

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
	dog_t *ptr;
	dog_t new;

	ptr = &new;
	new.name = name;
	new.age = age;
	new.owner = owner;
	return (ptr);
}
