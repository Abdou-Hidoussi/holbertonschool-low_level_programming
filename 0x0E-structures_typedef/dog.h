#ifndef DOG_FILE
#define DOG_FILE
/**
*struct dog - dog
*@name: name
*@age: float
*@owner: owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
