/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:48:40 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/30 14:19:22 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
DESCRIPTION
       The  memset()  function  fills  the  first  n  bytes of the memory area
       pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.
*/
/*
#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
    char str[] = "Hola, món!";
    
    // Cas sense solapament
    ft_memmove(str + 6, str, 5);
    printf("%s\n", str);  // Esperat: "Hola, Hola!"

    // Cas amb solapament (memmove ha de manejar-lo correctament)
    char overlap[] = "123456";
    ft_memmove(overlap + 2, overlap, 4);
    printf("%s\n", overlap);  // Esperat: "121234"

    return 0;
}
*/
