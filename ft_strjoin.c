/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <dramos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:38:01 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 13:08:49 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i1;
	size_t	i2;

	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	new = (char *)malloc((i1 + i2 + 1) * sizeof(char));
	if (!new)
		return (0);
	ft_strlcpy(new, s1, i1 + 1);
	ft_strlcpy(new + i1, s2, i2 + 1);
	return (new);
}
/*
int	main()
{
	char	s1[] = "Daniela";
	char	s2[] = " Ramos";

	printf("%s", ft_strjoin(s1, s2));
}*/
