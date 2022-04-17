/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:45:23 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/17 15:45:12 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	ruf(int	*stack, int x, int n)
{
	while (stack[0] != x)
		smart_rotate(stack, ffo(stack, x, n), n);
}

void	smart_rotate(int *a_stack, int nb, int n)
{
	if (nb <= (n / 2))
		ra(a_stack, n);
	else
		rra(a_stack, n);
}

int	lis_size(int *lis, int n)
{
	int	i;

	i = 0;
	while (i < n - 1 && !(lis[i] == 0 && lis[i + 1] == 0))
		i++;
	return (i - 1);
}

void	fill_w_lis(int *a_stack, int *b_stack, int *lis, int n)
{
	int	i;
	int	j;

	j = 0;
	i = -1;
	while (++i < n && j < lis_size(lis, n) + 1)
	{
		if (a_stack[i] != lis[j])
		{
			ruf(a_stack, lis[j], n);
			pb(a_stack, b_stack, n);
			j++;
			i = -1;
		}
	}
}
