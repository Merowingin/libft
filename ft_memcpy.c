/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 01:59:32 by vbut              #+#    #+#             */
/*   Updated: 2016/11/11 01:59:34 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*s1dst;
	unsigned char	*s2src;

	i = 0;
	s1dst = (unsigned char *)dst;
	s2src = (unsigned char *)src;
	while (n--)
	{
		((s1dst)[i]) = ((s2src)[i]);
		i++;
	}
	return (dst);
}
