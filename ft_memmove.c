/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:53:54 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/30 14:28:39 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	temp_dest = dest;
	temp_src = (unsigned char *)src;
	if (temp_dest == NULL && temp_src == NULL)
		return (NULL);
	if (temp_src < temp_dest && (temp_src + n) > temp_dest)
	{
		temp_dest += n;
		temp_src += n;
		if (temp_src < temp_dest && temp_src + n > temp_dest)
		{
			while (n-- > 0)
				*(--temp_dest) = *(--temp_src);
		}
	}
	else
	{
		while (n-- > 0)
			*(temp_dest++) = *(temp_src++);
	}
	return (dest);
}
/*
   DESCRIPTION
   The  memmove()  function  copies n bytes from memory area src to memory
   area dest.  The memory areas may overlap: copying takes place as though
   the  bytes in src are first copied into a temporary array that does not
   overlap src or dest, and the bytes are then copied from  the  temporary
   array to dest.

   RETURN VALUE
   The memmove() function returns a pointer to dest.
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
