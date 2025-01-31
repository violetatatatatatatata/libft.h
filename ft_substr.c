/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:24:42 by cbolanos          #+#    #+#             */
/*   Updated: 2025/01/31 18:01:41 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La función ft_substr genera una subcadena (substring) de una cadena dada (s).
Extrae una parte de la cadena, empezando en un índice específico (start) y con
una longitud máxima (len).
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	char	*subsrtn;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		subs = (char *)malloc(sizeof(char));
		if (!subs)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	subsrtn = subs;
	while (s[start] && len--)
		*subs++ = s[start++];
	*subs = '\0';
	return (subsrtn);
}
