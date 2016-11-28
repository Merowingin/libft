/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 19:15:00 by vbut              #+#    #+#             */
/*   Updated: 2016/11/12 19:15:01 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *strs1;
	unsigned char *strs2;

	strs1 = (unsigned char *)s1;
	strs2 = (unsigned char *)s2;
	if (n)
	{
		while (n - 1 && *strs1 == *strs2)
		{
			strs1++;
			strs2++;
			n--;
		}
		return (*strs1 - *strs2);
	}
	else
		return (0);
}
