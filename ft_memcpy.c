/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:21:11 by dramos-j          #+#    #+#             */
/*   Updated: 2023/10/31 17:58:34 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	while (n--)
		((char *)dest)[n] = ((const char *)src)[n];
	return (dest);
}
/*
int	main()
{
	char	str[] = "Daniela";
	char	dest1[] = "*******";
	char	dest2[] = "*******";
	size_t	n = 4;

	memcpy (dest1, str, n);
	printf("%s\n", dest1);
	ft_memcpy (dest2, str, n);
	printf("%s", dest2);
}*/
