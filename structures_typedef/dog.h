#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - age owner name info
 * @name: dog name
 * @owner: owner name
 * @age: dog age
 *
 */

struct dog

{
  char *name;
  float age;
  char *owner;
};

/**
 * dog_t - typedef of dog info
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
