/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <dramos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:27:17 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 13:14:40 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long nb)
{
	size_t	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		len++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*s;
	size_t	len;

	nb = n;
	len = ft_len(nb);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (0);
	s[len] = '\0';
	len--;
	if (nb < 0)
	{
		s[0] = '-';
		nb = nb * (-1);
	}
	while (nb > 9 && len > 0)
	{
		s[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	s[len] = nb + '0';
	return (s);
}
/*
int     main()
{
        printf("%s", ft_itoa(-345));
}*/
