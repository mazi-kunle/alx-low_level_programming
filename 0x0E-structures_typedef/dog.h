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


/**
 * struct old- a structure for dog.
 * @name: first member.
 * @age: second member.
 * @owner: third owner.
 *
*/
typedef struct old
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
