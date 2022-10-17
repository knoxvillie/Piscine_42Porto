/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:40:46 by kfaustin          #+#    #+#             */
/*   Updated: 2022/09/29 13:54:14 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
/*
#include<stdio.h>

int	main(void)
{
	char *str = "Essa string tem tamanho:36 e len35:";

	printf("%d", ft_strlen(str));
	return (0);
}
*/
