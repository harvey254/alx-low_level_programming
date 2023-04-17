#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - stores information of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 * Description: struct called "dog" that
 * store it name, age and name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
