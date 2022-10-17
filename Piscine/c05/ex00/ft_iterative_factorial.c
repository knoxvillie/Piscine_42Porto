/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:32:08 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/02 12:32:12 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	fatorial;

	fatorial = nb;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		fatorial++;
	}
	while (nb > 1)
	{
		fatorial *= --nb;
	}
	return (fatorial);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d \n", ft_iterative_factorial(1));
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d \n", ft_iterative_factorial(12));
	return (0);
}
*/
