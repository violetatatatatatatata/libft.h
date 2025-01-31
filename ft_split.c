/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:36:31 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/31 18:09:11 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c);
char		**ft_split(char const *s, char c);
char		**extract_words(char const *s, char c, char **array);
char		**free_memory(char **array, int i);

/*
Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.
*/

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	array = extract_words(s, c, array);
	return (array);
}

int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**extract_words(char const *s, char c, char **array)
{
	int	i;
	int	word_length;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		word_length = 0;
		while (s[word_length] && s[word_length] != c)
			word_length++;
		array[i] = ft_substr(s, 0, word_length);
		if (!array[i])
		{
			free_memory(array, i);
			return (NULL);
		}
		s += word_length;
		i++;
	}
	array[i] = (NULL);
	return (array);
}

char	**free_memory(char **array, int i)
{
	while (i--)
		free(array[i]);
	free(array);
	return (NULL);
}
