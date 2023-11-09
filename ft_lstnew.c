/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:20:12 by dramos-j          #+#    #+#             */
/*   Updated: 2023/10/29 15:04:59 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list));
	if (!lstnew)
		return (0);
	lstnew->content = content;
	lstnew->next = 0;
	return (lstnew);
}
/*
int	main()
{
	char	*s = "Daniela";
	t_list	*lstnew;

	lstnew = ft_lstnew((void *)s);
	printf("%s", (char *)lstnew->content);
}*/
