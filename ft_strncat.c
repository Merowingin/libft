/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:58:49 by vbut              #+#    #+#             */
/*   Updated: 2016/11/13 16:58:50 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *str;

	str = s1;
	while (*s1)
		s1++;
	while (n-- > 0 && *s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (str);
}
