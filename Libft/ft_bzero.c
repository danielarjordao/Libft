/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:59:52 by dramos-j          #+#    #+#             */
/*   Updated: 2023/10/31 17:48:29 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main()
{
	char	s1[] = "Daniela";
	char	s2[] = "Daniela";
	size_t	i = 4;

	bzero(s1, i);
	printf("%s\n", s1);
	printf("%s\n", s1 + i);
	ft_bzero(s2, i);
	printf("%s\n", s2);
	printf("%s", s2 + i);
}*/
