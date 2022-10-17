/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:32:58 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/02 13:52:18 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(0));
	printf("%d \n", ft_fibonacci(1));
	printf("%d \n", ft_fibonacci(10));
	return (0);
}
*/
