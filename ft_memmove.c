/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:17:11 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/03 18:02:38 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!src && !dest)
		return (0);
	if (s < d)
		return (ft_memcpy(dest, src, n));
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}
/*
int	main()
{
	char	s[] = "****";
	char	d1[] = "Daniela";
	char	d2[] = "Daniela";

	memmove(d1, s, 5);
	printf("%s\n", d1);
	ft_memmove(d2, s, 5);
	printf("%s", d2);
}*/
