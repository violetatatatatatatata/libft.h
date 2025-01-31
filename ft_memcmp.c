/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:41:43 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/30 14:16:55 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	int				diff;
	size_t			i;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (src1[i] != src2[i])
		{
			diff = src1[i] - src2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
/*
DESCRIPTION
       The  memcmp()  function  compares the first n bytes (each interpreted
	   as unsigned char) of the memory areas s1 and s2.

RETURN VALUE
       The memcmp() function returns an integer less than, equal to, or
	   greater  than  zero  if  the first  n bytes of s1 is found,
	   respectively, to be less than, to match, or be greater than the
       first n bytes of s2.
*/
/*
#include <stdio.h>
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    printf("%d\n", ft_memcmp("ABC", "ABD", 3));  // Esperat: diferent (C vs D)
    printf("%d\n", ft_memcmp("Hello", "Hello", 5));  // Esperat: 0 (iguals)
    printf("%d\n", ft_memcmp("Test", "Tesa", 4));  // Esperat: diferent (t vs a)
}
*/
