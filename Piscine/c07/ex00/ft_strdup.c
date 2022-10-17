/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:49:34 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/10 13:34:28 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*strcp;

	i = 0;
	while (src[i])
	{
		i++;
	}
	strcp = (char *)malloc(sizeof(char) * (i + 1));
	if (!strcp)
		return (0);
	i = 0;
	while (src[i])
	{
		strcp[i] = src[i];
		i++;
	}
	strcp[i] = '\0';
	return (strcp);
}
/*
#include<stdio.h>

int	main(void)
{
	char *s1 = "eunaoaguento maissssssssssssssss P";
	printf("%s", ft_strdup(s1));
	return (0);
}
*/
