/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <dramos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:09:11 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 13:04:39 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*d;

	i = ft_strlen(s) + 1;
	d = (char *)malloc(i);
	if (!d)
		return (0);
	ft_strlcpy(d, s, i);
	return (d);
}
/*
int	main()
{
	char	s[] = "Daniela";

	printf("%s", ft_strdup(s));
}*/
