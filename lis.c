/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:12:14 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/08 20:32:51 by maparigi         ###   ########.fr       */
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

int	find_first_occurrence(int *arr, int to_find, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		if (arr[i] == to_find)
			return (i);
	return (-1);
}

void	lis_set(int val, int *arr, int *tofill, int n)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (++i < n)
	{
		if (arr[i] >= val)
		{
			tofill[j] = arr[i];
			val = tofill[j];
			j++;
		}
	}
}

void	lis_al(int *arr, int *tofill, int n)
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
	i = find_first_occurrence(lis, bi(lis, n), n);
	free(lis);
	lis_set(arr[i], arr + i, tofill, n - i);
}
