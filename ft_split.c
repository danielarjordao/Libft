/* ************************************************************************** */
/*                                                                           */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:26:30 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 13:13:04 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char	**new, int i)
{
	while (i > 0)
	{
		i--;
		free(new[i]);
	}
	free(new);
	return (0);
}

static int	countwords(char const *s, char c)
{
	int		words;
	char	*str;
	size_t	i;

	words = 0;
	i = 0;
	str = (char *)s;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			words++;
		while (*str && *str != c)
			str++;
	}
	return (words);
}

static char	*fillwords(char const *s, char c)
{
	char	*str;
	char	*rest;
	char	*new;
	size_t	start;
	size_t	end;

	start = 0;
	str = (char *)s;
	rest = ft_strchr(str, (int)c);
	if (rest)
		end = ft_strlen(str) - ft_strlen(rest);
	else
		end = ft_strlen(str);
	new = ft_substr(str, start, end);
	return (new);
}

char	**ft_split(char const *s, char c)
{
	size_t		words;
	char		**new;
	char		*str;
	size_t		i;

	if (!s)
		return (0);
	words = countwords(s, c);
	new = (char **)malloc((words + 1) * sizeof(char *));
	if (!new)
		return (0);
	i = 0;
	str = (char *)s;
	while (i < words)
	{
		while (*str == c)
			str++;
		new[i] = fillwords(str, c);
		if (!new[i])
			return (ft_free(new, i));
		str = ft_strchr(str, (int)c);
		i++;
	}
	new[i] = 0;
	return (new);
}
/*
int	main()
{
	char	**new;
       	const char 	*s = "**aa***bbb***";
	char	c = '*';

	new = ft_split(s, c);
	size_t	i;

	if (new)
	{
		i = 0;
		while (new[i])
		{
			printf("%s\n", *ft_split(new[i], c));
			i++;
		}
	}
}*/
