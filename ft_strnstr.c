/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:24:41 by vbut              #+#    #+#             */
/*   Updated: 2016/11/15 22:24:43 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	k = 0;
	if (*s2 == '\0')
		return (char*)(s1);
	while (i < size && s1[i])
	{
		j = i;
		k = 0;
		while (s1[j] == s2[k] && j < size)
		{
			j++;
			k++;
			if (s2[k] == '\0')
				return (char*)(&s1[i]);
		}
		i++;
	}
	return (0);
}
