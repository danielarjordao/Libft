/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:06:55 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/04 15:14:36 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main()
{
	t_list	*t1 = ft_lstnew("1");
	t_list	*t2 = ft_lstnew("2");
	t_list	*t3 = ft_lstnew("3");
	t1->next = t2;
	printf("%s\n%p\n", (char *)t1->content, t1->next);
	printf("%s\n%p\n", (char *)t2->content, t2->next);
	printf("%s\n%p\n", (char *)t3->content, t3->next);
	ft_lstadd_front(&t1, t3);
	printf("%s\n%p\n", (char *)t1->content, t1->next);
	printf("%s\n%p\n", (char *)t2->content, t2->next);
	printf("%s\n%p\n", (char *)t3->content, t3->next);
}*/
