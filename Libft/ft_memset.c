/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:19:53 by dramos-j          #+#    #+#             */
/*   Updated: 2023/10/31 17:48:08 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		((char *)s)[n] = c;
	return (s);
}
/*
int	main()
{
	char	s1[] = "Daniela";
	char	s2[] = "Daniela";

	memset(s1, '*', 4);
	printf("%s\n", s1);
	ft_memset(s2, '*', 4);
	printf("%s", s2);
}*/
