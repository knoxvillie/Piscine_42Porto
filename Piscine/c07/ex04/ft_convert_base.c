/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:00 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/12 09:59:13 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str, int *index)
{
	int	i;
	int	sinal;

	i = 0;
	sinal = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sinal = sinal * -1;
		}
		i++;
	}
	*index = i;
	return (sinal);
}

int	ft_strtwice_plusminus_size(char *str, int *size)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' '
			|| (str[i] >= 9 && str[i] <= 13))
			return (1);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (1);
	*size = i;
	return (0);
}

int	ft_ver_c_base(char c, char *str, int *place)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			*place = i;
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sinal;
	int	res;
	int	size;
	int	pos;

	size = 0;
	sinal = 0;
	i = 0;
	res = 0;
	if (!(ft_strtwice_plusminus_size(base, &size)))
	{
		sinal = ft_isspace(str, &i);
		while (ft_ver_c_base(str[i], base, &pos))
		{
			res = pos + res * size;
			i++;
		}
		return (sinal * res);
	}
	return (0);
}
