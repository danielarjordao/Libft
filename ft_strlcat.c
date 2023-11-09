/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <dramos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:48:18 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 12:20:07 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	char		*s;

	i = ft_strlen(dst);
	j = 0;
	s = (char *)src;
	if (!size)
		return (ft_strlen(src));
	while (s[j] && i + j < size - 1)
	{
		dst[i + j] = s[j];
		j++;
	}
	dst[i + j] = '\0';
	if (i >= size)
		return (size + ft_strlen(src));
	else
		return (i + ft_strlen(src));
}
/*
int	main()
{
	char	d[] = "****";
	char	s[] = "Daniela";

	ft_strlcat(d, s, 8);
	printf("%s", d);
}*/	
