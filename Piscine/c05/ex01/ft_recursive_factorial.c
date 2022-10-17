/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:32:22 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/02 12:37:25 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d \n", ft_recursive_factorial(0));
	printf("%d \n", ft_recursive_factorial(1));
	printf("%d \n", ft_recursive_factorial(12));
	printf("%d \n", ft_recursive_factorial(13));
	return (0);
}
*/
