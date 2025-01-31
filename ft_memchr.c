/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:09:58 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/30 14:36:22 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	src = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
/*
DESCRIPTION
       The  memchr()  function  scans  the  initial n bytes of the memory area
       pointed to by s for the first instance of c.  Both c and the  bytes  of
       the memory area pointed to by s are interpreted as unsigned char.
RETURN VALUE
       The memchr() and memrchr() functions return a pointer to the matching
	   byte  or  NULL  if  the
       character does not occur in the given memory area.
*/
/*
#include <stdio.h>
#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    printf("ft_memcmp: %d\n", ft_memcmp("ABC", "ABD", 3));
}
*/
