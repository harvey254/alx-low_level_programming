#ifndef _DOG_H_
#define _DOG_H_
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


#endif
