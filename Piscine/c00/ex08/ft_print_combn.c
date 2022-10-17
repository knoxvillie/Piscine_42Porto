/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:31:05 by kfaustin          #+#    #+#             */
/*   Updated: 2022/09/22 19:04:33 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_combn(int n);
void	printaij(int i, int j);

void	printaij(int i, int j)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	k;
	int	digito;

	digito = 1;
	i = 0;
	k = 0;
	j = i + 1;
	while (k < n)
	{
		digito *= 10;
		k++;
	}
	while (i < digito)
	{
		j = i + 1;
		while (j < 10)
		{
			printaij(i, j);
			j++;
		}
		i++;
	}
}
