/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 02:15:42 by vbut              #+#    #+#             */
/*   Updated: 2016/11/21 02:15:43 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new1;
	char *new2;

	if (s1 == NULL && s2 == NULL)
		return (ft_strnew(0));
	else if (s1 == NULL)
		return (ft_strdup(s1));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	new1 = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (new1 == NULL)
		return (NULL);
	new2 = new1;
	while (*s1)
		*new2++ = *s1++;
	while (*s2)
		*new2++ = *s2++;
	*new2 = '\0';
	return (new1);
}
