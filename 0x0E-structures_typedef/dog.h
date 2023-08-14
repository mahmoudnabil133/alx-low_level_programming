#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - have some info about dog
 * @name: dog name
 * @age: dog age
 * @owner: the owner of dog
 * Decription: this struct have some info about dog as name, age and its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - is a datatype
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
