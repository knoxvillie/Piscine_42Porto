/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:10:43 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/10 13:37:59 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*mat;
	int	i;
	int	tamanho;

	tamanho = max - min;
	if (min >= max)
		return (NULL);
	mat = (int *)malloc(tamanho * sizeof(int));
	if (!mat)
		return (NULL);
	i = 0;
	while (min < max)
	{
		mat[i] = min;
		min++;
		i++;
	}
	return (mat);
}
/*
#include<stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	i;

	i = 0;
	min = -25;
	max = 10;
	int *mat;

	mat = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d", mat[i]);
		i++;
	}
	return (0);
}
*/
