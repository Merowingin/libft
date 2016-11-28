/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:28:28 by vbut              #+#    #+#             */
/*   Updated: 2016/11/23 16:28:30 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*i;

	if (lst && f)
	{
		new = f(lst);
		i = new;
		while (lst->next)
		{
			i->next = f(lst->next);
			i = i->next;
			lst = lst->next;
		}
		return (new);
	}
	return (0);
}
