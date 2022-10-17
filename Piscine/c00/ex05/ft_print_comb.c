/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:29:43 by kfaustin          #+#    #+#             */
/*   Updated: 2022/09/22 18:49:53 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_commas(void);
void	ft_logica(int a, int b, int c);
void	ft_ft_print_comb(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_logica(int a, int b, int c)
{
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != '7')
				{
					ft_commas();
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = a + 1;
	c = b + 1;
	ft_logica(a, b, c);
}
