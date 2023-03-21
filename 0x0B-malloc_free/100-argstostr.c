#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - contatenates all arguments of the program.
 * returns NULL if ac == 0 or av == NULL.
 * @ac: number of arguments.
 * @av: Array of arguments or strings.
 * Return: Pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *args;
	int i;
	size_t str_len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		str_len = strlen(av[i]);
		args = (char *)malloc(str_len + 2);
		if (args == NULL)
		{
			return (NULL);
		}
		printf("%s\n", av[i]);
		i++;
	}
	return (args);
}
