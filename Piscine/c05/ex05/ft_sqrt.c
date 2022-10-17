/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:14:48 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/03 13:53:33 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i) < (unsigned int)nb)
		i++;
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
/*
#include<stdio.h>
#include<limits.h>

int	main(void)
{
	printf("%d \n", ft_sqrt(-1));
	printf("%d \n", ft_sqrt(-0));
	printf("%d \n", ft_sqrt(0));
	printf("%d \n", ft_sqrt(145689564));
	printf("%d \n", ft_sqrt(81));
	printf("%d \n", ft_sqrt(INT_MAX-10));
	return (0);
}
*/
