/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:49:05 by vbut              #+#    #+#             */
/*   Updated: 2016/11/16 17:49:07 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((9 <= c && c <= 13) || c == 32);
}

int			ft_atoi(const char *str)
{
	int n;
	int j;

	n = 0;
	j = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		j = 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
		n = n * 10 + (*str++ - '0');
	if (j)
		return (-n);
	else
		return (n);
}
