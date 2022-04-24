/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:45:23 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/24 20:03:02 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"


void	sort_bx(int *a_stack, int *b_stack, int vals[3], int n)
{
	if (vals[1] > 0 && vals[2] > 0)
	{
		while (vals[1] != 0 && vals[2] != 0)
		{
			rr(a_stack, b_stack, n);
			vals[1]--;
			vals[2]--;
		}
	}
	else if (vals[1] < 0 && vals[2] < 0)
	{
		while (vals[1] != 0 && vals[2] != 0)
		{
			rrr(a_stack, b_stack, n);
			vals[1]++;
			vals[2]++;
		}
	}
}

void	sort_vals(int *a_stack, int *b_stack, int vals[3], int n)
{
	int	x;

	x = 1;
	sort_bx(a_stack, b_stack, vals, n);
	while (vals[x] != 0 && x <= 2)
	{
		if (x == 1 && vals[x] < 0)
			rb(b_stack, 1, lis_size(b_stack, n) + 1);
		else if (x == 1 && vals[x] > 0)
			rrb(b_stack, 1, lis_size(b_stack, n) + 1);
		else if (x == 2 && vals[x] < 0)
			ra(a_stack, 1, lis_size(a_stack, n) + 1);
		else if (x == 2 && vals[x] > 0)
			rra(a_stack, 1, lis_size(a_stack, n) + 1);
		if (vals[x] > 0)
			vals[x]--;
		else
			vals[x]++;
		if (vals[x] == 0)
			x++;
	}
	pa(a_stack, b_stack, 1, n);
}
