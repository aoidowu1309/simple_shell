#include <stdio.h>
#include <stdlib.h>

/**
 * main - accepts argument
 * @av- NULL terminated array of strings
 * @ac- number of items in av
 * Return: Always 0.
 */
int main(__attribute__((unused))int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return(0);
}
