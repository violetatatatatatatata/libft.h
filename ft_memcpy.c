/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:53:25 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/30 14:17:38 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_aux;
	unsigned char	*src_aux;

	i = 0;
	dest_aux = (unsigned char *)dest;
	src_aux = (unsigned char *)src;
	while (i < n)
	{
		dest_aux[i] = src_aux[i];
		i++;
	}
	return (dest);
}
/*
       The  memcpy()  function  copies  n bytes from memory
       area src to memory area dest.  The memory areas must
       not  overlap.  Use memmove(3) if the memory areas do
       overlap.
*/
/*
#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char dest[20] = "XXXXXXXXXX";
    ft_memcpy(dest, "Hola", 4);
    printf("%s\n", dest);  // Esperat: "HolaXXXXXX"

    char src[] = "Món!";
    ft_memcpy(dest + 5, src, 4);
    printf("%s\n", dest);  // Esperat: "HolaXMon!"

    return 0;
}
*/
