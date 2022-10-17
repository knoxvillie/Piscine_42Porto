/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:20:36 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/02 13:31:12 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power != 0)
		return (nb * ft_recursive_power(nb, --power));
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d \n", ft_recursive_power(0, 0));
	printf("%d \n", ft_recursive_power(0, 1));
	printf("%d \n", ft_recursive_power(2, 31));
	printf("%d \n", ft_recursive_power(2, 30));
	printf("%d \n", ft_recursive_power(-2, 31));
	printf("%d \n", ft_recursive_power(-2, 30));
	return (0);
}
*/
