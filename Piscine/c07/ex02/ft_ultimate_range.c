/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:05:16 by kfaustin          #+#    #+#             */
/*   Updated: 2022/10/10 13:55:46 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	temp = (int *)malloc((max - min) * sizeof(int));
	if (!temp)
		return (-1);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	*range = temp;
	return (i);
}
/*
#include<stdio.h>
int main()
{
	int	**arr;
	int	*arr2;
	int	i = 0;
	arr = &arr2;
	printf("%d \n", ft_ultimate_range(arr, 0, 10));
	
	while (i < 10)
	{
		printf("%d ", arr2[i]);
		i++;
	}
	printf("\n cabou");
	return 0;
}
*/
