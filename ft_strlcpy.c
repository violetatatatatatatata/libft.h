/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:56:50 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/24 14:59:17 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			src_len;
	size_t			i;
	unsigned char	*dst_aux;
	unsigned char	*src_aux;

	src_len = 0;
	i = 0;
	dst_aux = (unsigned char *) dst;
	src_aux = (unsigned char *) src;
	if (!dst || !src)
		return (0);
	while (src_aux[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (i < (size - 1) && src_aux[i] != '\0')
	{
		dst_aux[i] = src[i];
		i++;
	}
	dst_aux[i] = '\0';
	return (src_len);
}
/*
DESCRIPTION
	The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
     minated string src to dst, NUL-terminating the result.

RETURN VALUE
	The strlcpy() and strlcat() functions return the total length of the
     string they tried to create.
*/
