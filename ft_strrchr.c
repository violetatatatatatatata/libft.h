/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:55:47 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/16 19:01:22 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//        The strchr() function returns a pointer to the first occurrence of
//	  the character c in the string s.

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occurrence;

	last_occurrence = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last_occurrence = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (last_occurrence);
}
