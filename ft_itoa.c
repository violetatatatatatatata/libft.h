/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:03:23 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/31 18:10:33 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	(Integer to ASCII) es una función que convierte un número entero en
	una cadena de caracteres (char *), es decir, transforma un int en una
	string.
*/

static int	num_str_len(int n);
static long	itol_abs(int n);

char	*ft_itoa(int n)
{
	int		num_len;
	long	n_long;
	char	*n_str;

	num_len = num_str_len(n);
	n_str = (char *)malloc((num_len + 1) * sizeof(char));
	if (!n_str)
		return (NULL);
	n_long = itol_abs(n);
	if (n == 0)
	{
		n_str[0] = '0';
		n_str[1] = '\0';
		return (n_str);
	}
	if (n < 0)
		n_str[0] = '-';
	n_str[num_len] = '\0';
	while (n_long > 0)
	{
		n_str[num_len - 1] = (n_long % 10) + '0';
		n_long = n_long / 10;
		num_len--;
	}
	return (n_str);
}

static int	num_str_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static long	itol_abs(int n)
{
	if (n < 0)
		return ((long)n * -1);
	return ((long)n);
}
