/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:40:19 by kfaustin          #+#    #+#             */
/*   Updated: 2022/09/30 12:04:57 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 || *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include<stdio.h>
 
int     main(void)
{
        char s1[] = "aaa";
        char s2[] = "ab";
 
        printf("%d", ft_strcmp(s1, s2));
        return(0);
}
*/
