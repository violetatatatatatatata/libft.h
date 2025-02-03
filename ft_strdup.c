/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:14:45 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/31 17:58:29 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The  strdup() function returns a pointer to a new string which is a
	duplicate of the string s. Memory for the new string is obtained with
	malloc(3), and can be freed with free(3)
*/

char	*ft_strdup(char *s)
{
	int		i;
	char	*strdup;

	i = 0;
	strdup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!strdup)
		return (NULL);
	while (s[i] != '\0')
	{
		strdup[i] = s[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
