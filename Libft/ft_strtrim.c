/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <dramos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:19:45 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 13:10:42 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	s;
	size_t	f;

	s = 0;
	f = ft_strlen(s1) - 1;
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	while (s1[f] && ft_strchr(set, s1[f]))
		f--;
	s2 = ft_substr(s1, s, (f - s + 1));
	return (s2);
}
/*
int	main()
{ 
	printf("%s", ft_strtrim("****Daniela*i******", "*"));
}*/
