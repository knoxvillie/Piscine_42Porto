/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:06:38 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/02 17:12:46 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d \n", ft_is_prime(0));
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(-1));
	printf("%d \n", ft_is_prime(100));
	printf("%d \n", ft_is_prime(101));
	printf("%d \n", ft_is_prime(20911));
	return (0);
}
*/
