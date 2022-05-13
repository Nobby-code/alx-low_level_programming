#include <stdio.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 *new_dog - function to creeate a new dog
 *@name: name of the created dog
 *@age: ae of the created dog
 *@owner: owner of the dog
 *
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cute_dog;
	int name_len = 0, own_len = 0;

	if (name != 0 && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		own_len = _strlen(owner) + 1;
		cute_dog = mallo(sizeof(dog_t));

		if (cute == NULL)
		{
			free(cute_dog);
			return (NULL);
		}
		cute_dog->owner = malloc(sizeof(char) * own_len);

		if (cute_dog->owner == NUL)
		{
			free(cute_dog->name);
			free(cute_dog);
			return (NULL);
		}

		cute_dog->name = _strcpy(cute_dog->name, name);
		cute_dog->owner = _strcpy(cute_dog->owner, owner);
		cute_dog->age = age;
	}
	return (cute_dog);
}

/**
 *_strlen - Returns the length of a string
 *@s: string to count
 *
 *Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}

/**
 *_strcpy - copy a string
 *@dest: destination value
 *@src: source value
 *
 * Return: The pointer tto dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

