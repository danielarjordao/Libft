/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:34:32 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 13:18:33 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	clean(unsigned int i, char *s)
{
	if ((s[0] < 'a' || s[0] > 'z') && (s[0] < 'A' || s[0] > 'Z'))
				s[0] = ' ';
}

int	main()
{
	char	s[] = "****Daniela***Jordao***";

	ft_striteri(s, clean);
	printf("%s", s);
}*/
