/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:42:41 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/30 13:25:03 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	isascii;
	int	a;

	isascii = 1;
	a = (int)c;
	if (a >= 0 && a <= 127)
		return (isascii);
	return (0);
}
