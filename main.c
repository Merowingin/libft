/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbut <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:56:53 by vbut              #+#    #+#             */
/*   Updated: 2016/11/10 23:56:58 by vbut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

size_t   ft_strlen(const char *s)
{
   int i;

   i = 0;
   while (s[i])
      i++;
   return (i);
}

void  ft_putstr_fd(char const *s, int fd)
{
   write(fd, s, ft_strlen(s));
}

int main ()
{
   char str[50];
   char *ptr1;
   int   fd;

   fd = 1;   
   strcpy(str, "This is_shit");
   ptr1 = str;
   puts(ptr1);
   write (1, "\n", 1);
   ft_putstr_fd(ptr1, fd);
   return(0); 
}
