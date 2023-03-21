#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_words(char *str);
int get_word_length(char *str);
void free_array(char **arr, int size);

/**
 * strtow - function splits a string into words
 * @str: string to be partitioned.
 * Return: Pointer.
 */

char **strtow(char *str)
{
	char **words;
	int i, num_words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);
	words = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*str != '\0')
	{
		if (isspace(*str))
		{
			str++;
		}
		else
		{
			int word_len = get_word_length(str);

			words[i] = malloc(sizeof(char) * (word_len + 1));
			if (words[i] == NULL)
			{
				free_array(words, i);
				return (NULL);
			}
			strncpy(words[i], str, word_len);
			words[i][word_len] = '\0';
			i++;
			str += word_len;
		}
	}
	words[i] = NULL;
	return (words);
}
/**
 * count_words - function that counts words in a string.
 * @str: string to be counted.
 * Return: Success(0).
 */

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (isspace(*str))
		{
			in_word = 0;
		}
		else
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		str++;
	}
	return (count);
}

/**
 * get_word_length - function gets the words length.
 * @str: string we want to find the length of.
 * Return: Success(0).
 */

int get_word_length(char *str)
{
	int len = 0;

	while (*str != '\0' && !isspace(*str))
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * free_array - function frees memory.
 * @arr: Array of arguments.
 * @size: number of arguments.
 */

void free_array(char **arr, int size)
{
	int i = 0;

	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
