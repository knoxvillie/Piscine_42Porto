/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:06:58 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/10 15:08:31 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_lenstrs(int size, char **strs, char *sep)
{
	int	i;
	int	comp;

	i = 0;
	comp = 0;
	while (i < size)
	{
		comp += ft_strlen(strs[i]);
		i++;
	}
	comp += ft_strlen(sep) * (size - 1);
	return (comp);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*temp;
	int		num1;

	num1 = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	str = (char *)malloc(sizeof(char) * (ft_lenstrs(size, strs, sep) + 1));
	if (!str)
		return (0);
	temp = str;
	while (num1 < size)
	{
		ft_strcpy(temp, strs[num1]);
		temp += ft_strlen(strs[num1]);
		if (num1 < size -1)
		{
			ft_strcpy(temp, sep);
			temp += ft_strlen(sep);
		}
		num1++;
	}
	*temp = '\0';
	return (str);
}
/*#include <stdio.h>
int	main(int argc, char **argv)
{

	int	size;
	char	*sep;
	char	**strs;
	char	*str;

	(void)argc;
	(void)argv;
	strs = (char**)malloc(sizeof(strs) * 5);
	strs[0] = "Chopin";
	strs[1] = "000";
	strs[2] = "Mahler";
	strs[3] = "2323";
	strs[4] = "Beethoven";
	sep = "+-+";
	size = 0;
	while (size < 6)
	{
		str = ft_strjoin(size, strs, sep);
		printf("%d: %s\n", size, str);
		free(str);
		size++;
	}
}*/
