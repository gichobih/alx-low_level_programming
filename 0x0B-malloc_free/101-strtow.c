#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count, word_length;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = strlen(str);
	word_count = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;

	while (i < len)
	{
		while (i < len && str[i] == ' ')
			i++;

		if (i < len && str[i] != ' ')
		{
			j = i;
			while (j < len && str[j] != ' ')
				j++;

			word_length = j - i;
			words[k] = malloc((word_length + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			strncpy(words[k], &str[i], word_length);
			words[k][word_length] = '\0';

			k++;
			i = j;
		}
	}

	words[word_count] = NULL;
	return (words);
}

