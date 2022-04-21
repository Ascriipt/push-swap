/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 01:08:44 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/21 19:05:58 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int	si(int *lis, int n)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (++i < n)
		if (lis[i] < j)
			j = lis[i];
	return (j);
}

void	smot(int *stack, int *tmp, int n)
{
	int	fo;
	int	i;
	int	j;

	fo = ffo(stack, si(stack, n), n);
	i = fo - 1;
	j = -1;
	if (i < 0)
		i = -1;
	while (++i < n)
		tmp[++j] = stack[i];
	i = 0;
	while (++j < n - 1)
		tmp[j] = stack[i++];
}
