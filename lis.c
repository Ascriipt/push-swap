/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:12:14 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/18 02:41:29 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

	/*printf("arr[%d] = %d\n", index, arr[index]);
	printf("arr[%d] = %d\n", i, arr[i]);*/

int	is_lis(int x, int *lis, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		if (lis[i] == x)
			return (i);
	return (-1);
}

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

int	ffo(int *arr, int to_find, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		if (arr[i] == to_find)
			return (i);
	return (-1);
}

void	lis_set(int *lis, int *arr, int *tofill, int n)
{
	int	val;
	int	i;

	val = bi(lis, n);
	i = bi(lis, n) - 1;
	while (--n > -1)
	{
		if (lis[n] == val)
		{
			tofill[i] = arr[n];
			val -= 1;
			i--;
		}
	}
}

void	lis_al(int *arr, int *tofill, int n)
{
	int	*lis;
	int	i;
	int	j;

	i = -1;
	lis = NULL;
	lis = icalloc(lis, 1, n);
	while (++i < n)
	{
		j = -1;
		while (j++ < i - 1)
			if (arr[i] > arr[j])
				if (lis[j] + 1 > lis[i])
					lis[i] = lis[j] + 1;
	}
	lis_set(lis, arr, tofill, n);
	free(lis);
}
