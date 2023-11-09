/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <dramos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:04:15 by dramos-j          #+#    #+#             */
/*   Updated: 2023/10/29 17:59:01 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	if (fd > 0)
	{
		nb = n;
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = nb * (-1);
		}
		if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
			ft_putchar_fd((nb % 10) + '0', fd);
		}
		else
			ft_putchar_fd(nb + '0', fd);
	}
}
/*
int	main()
{
	int	nb = 0;

	ft_putnbr_fd(nb, 1);
}*/
