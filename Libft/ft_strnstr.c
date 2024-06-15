/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <dramos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:33:55 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 12:48:45 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)big;
	i = 0;
	j = 0;
	if (!little[j])
		return (s);
	while (big[i])
	{
		if (big[i] == little[j] && i < len)
		{
			j++;
			i++;
			if (!little[j])
				return (&s[i - j]);
		}
		else
		{
			i = i - (j - 1);
			j = 0;
		}
	}
	return (0);
}
/*
int	main()
{
	char	big[] = "Daniela Ramos";
	char	little[] = "ela";

	printf("%s", ft_strnstr(big, little, 10));
}*/
