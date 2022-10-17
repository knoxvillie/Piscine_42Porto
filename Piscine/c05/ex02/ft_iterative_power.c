/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:28:13 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/02 13:29:30 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	double	resultado;

	resultado = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (--power)
	{
		resultado *= nb;
		if (resultado < -2147483648 || resultado > 2147483647)
		{
			return (0);
		}
	}
	return (resultado);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("(2, 31)%d \n", ft_iterative_power(2,31));
	printf("(0, 0) %d \n", ft_iterative_power(0, 0));
	printf("(0, 1) %d \n", ft_iterative_power(0, 1));
	printf("(-2, 31) %d \n", ft_iterative_power(-2, 31));
	printf("(-2, 30 )%d \n", ft_iterative_power(-2, 30));
	return (0);
}
*/
