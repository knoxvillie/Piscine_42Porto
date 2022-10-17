/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:07:08 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/08 16:09:42 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	get_char_from_base(char *base, int index)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (i == index)
			return (base[i]);
		i += 1;
	}
	return ('\0');
}

static void	to_base(unsigned int n, int sign, char *base_to)
{
	char				c;
	unsigned int		base_len;

	base_len = ft_strlen(base_to);
	if (sign == -1)
		write(1, "-", 1);
	if (n < base_len)
	{
		c = get_char_from_base(base_to, n);
		write(1, &c, 1);
	}
	else
	{
		to_base(n / base_len, 1, base_to);
		to_base(n % base_len, 1, base_to);
	}
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base)
		return (0);
	while (base[i])
	{
		j = i;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			if (base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!check_base(base))
		return ;
	if (nbr < 0)
		to_base((unsigned int)(-nbr), -1, base);
	else
		to_base((unsigned int)nbr, 1, base);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr_base(-42, "01");
	printf("\n");
	ft_putnbr_base(-42, "0123456789");
	printf("\n");
	ft_putnbr_base(-42, "012456789ABCDEF");
	printf("\n");
	ft_putnbr_base(-42, "poneyvif");
	printf("\n");

	return (0);
}
*/
