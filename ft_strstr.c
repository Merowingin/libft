/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:04:06 by vbut              #+#    #+#             */
/*   Updated: 2016/11/13 23:04:36 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char	*src;

	src = (char *)big;
	i = 0;
	if (!*little)
		return (src);
	while (src[i])
	{
		j = 0;
		while (src[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return (src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
