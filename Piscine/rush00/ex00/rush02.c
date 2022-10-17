/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:20:32 by migmarti          #+#    #+#             */
/*   Updated: 2022/09/25 16:25:31 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_logic_line(int x, char startchar, char midchar, char endchar)
{
	ft_putchar(startchar);
	while ((x - 1) > 1)
	{
		ft_putchar(midchar);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(endchar);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_logic_line(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			ft_print_logic_line(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
			ft_print_logic_line(x, 'C', 'B', 'C');
	}
}
