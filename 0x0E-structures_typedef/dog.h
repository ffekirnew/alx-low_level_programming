#ifndef DOG_STRUCTURE
#define DOG_STRUCTURE
/**
 * struct dog - holds data of dogs
 * @name: name of the dog
 * @age: age of the dog, with precision
 * @owner: the name of the dog's owner
 *
 * Description: this struct will hold all the
 * necessary information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
