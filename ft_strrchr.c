/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 19:56:39 by vbut              #+#    #+#             */
/*   Updated: 2016/11/13 19:56:41 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *m;

	m = NULL;
	while (*s)
	{
		if (*s == (char)c)
			m = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (m);
}
