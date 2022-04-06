/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:12:14 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/05 20:40:25 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

	/*printf("arr[%d] = %d\n", index, arr[index]);
	printf("arr[%d] = %d\n", i, arr[i]);*/

int	bi(int *lis, int n)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (++i < n)
		if (lis[i] > j)
			j = lis[i];
	return (j);
}

void	lis_set(int val, int *arr, int size, int n)
{
	int	*lis;
	int	i;
	int	j;

	i = -1;
	j = 0;
	lis = NULL;
	lis = icalloc(lis, 0, size);
	while (++i < n)
	{
		if (arr[i] >= val)
		{
			lis[j] = arr[i];
			val = lis[j];
			j++;
		}
	}
	free(lis);
}

void	lis_al(int *arr, int n)
{
	int	*lis;
	int	i;
	int	j;
	int	c;

	i = -1;
	lis = NULL;
	lis = icalloc(lis, 1, n);
	while (++i < n)
	{
		c = i;
		j = i;
		while (++j < n)
		{
			if (arr[c] < arr[j])
			{
				lis[i] += 1;
				c = j;
			}
		}
	}
	i = bi(arr, n);
	j = bi(lis, n);
	free(lis);
	lis_set(1, arr, j, n);
}
