#ifndef DOG_H
#define DOG_H

/**
* init_dog -  initializes a variable of type struct dog
* @d: pointer to struct dog to initialize
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
