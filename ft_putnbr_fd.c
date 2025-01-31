/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:42:56 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/31 18:17:14 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Envía el número ’n’ al file descriptor dado

static int	putnbr_recursive(long n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = n;
	c = '0';
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * -1;
	}
	putnbr_recursive(nbr, fd);
	c = c + nbr % 10;
	write(fd, &c, 1);
}

static int	putnbr_recursive(long n, int fd)
{
	char	c;

	c = '0';
	if (n / 10 == 0)
		return (n);
	c = c + (putnbr_recursive(n / 10, fd) % 10);
	write (fd, &c, 1);
	return (n);
}
