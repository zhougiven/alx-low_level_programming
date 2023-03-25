#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a new struct type.
 * @name: first member.
 * @age: second member.
 * @owner: third member.
 *
 * Description: New user defined type, that is struct type,
 * struct dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif
