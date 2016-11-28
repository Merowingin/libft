/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 18:39:55 by vbut              #+#    #+#             */
/*   Updated: 2016/11/12 18:39:56 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *strs;

	strs = (unsigned char *)s;
	while (n--)
		if (*strs != (unsigned char)c)
			strs++;
		else
			return (strs);
	return (0);
}
