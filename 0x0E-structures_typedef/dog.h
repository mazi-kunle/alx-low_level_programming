#ifndef FIRST_H_
#define FIRST_H_

/**
 * struct dog- a structure for dog.
 * @name: first member.
 * @age: second member.
 * @owner: third owner.
 *
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
