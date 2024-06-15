/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <dramos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:14:27 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 13:16:07 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*d;
	size_t	i;

	d = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!d)
		return (0);
	i = 0;
	while (s[i])
	{
		d[i] = (*f)(i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*
char	clean(unsigned int i, char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		c = ' ';
	return (c);
}

int	main()
{
	printf("%s", ft_strmapi("a*b*c*d", clean));
}*/
