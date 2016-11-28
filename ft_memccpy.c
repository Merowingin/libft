/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:08:00 by vbut              #+#    #+#             */
/*   Updated: 2016/11/11 19:22:27 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		ch;
	char		*tmp;
	const char	*s;

	s = 0;
	tmp = (char *)dst;
	s = (char *)src;
	while (n--)
	{
		ch = *s++;
		*tmp++ = ch;
		if (ch == (char)c)
			return (tmp);
	}
	return (NULL);
}
