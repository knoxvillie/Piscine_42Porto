/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:55:21 by kfaustin          #+#    #+#             */
/*   Updated: 2022/09/28 09:56:05 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check_init;

	i = 0;
	check_init = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
		{
			if (str[i] >= 97 && str[i] <= 122 && !check_init)
			{
				str[i] -= 32;
				check_init = 1;
			}
			else
				check_init = 1;
		}
		else
			check_init = 0;
		i++;
	}
	return (str);
}
