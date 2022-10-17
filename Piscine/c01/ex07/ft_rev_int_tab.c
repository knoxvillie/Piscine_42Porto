/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:20:06 by kfaustin          #+#    #+#             */
/*   Updated: 2022/09/24 18:27:22 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	contador;
	int	temp;

	contador = 0;
	while (contador <= size - (contador + 1))
	{
		temp = tab[contador];
		tab[contador] = tab[size - (contador + 1)];
		tab[size - (contador + 1)] = temp;
		contador++;
	}
	contador = 0;
}
