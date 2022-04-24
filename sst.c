/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:45:23 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/24 18:53:50 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	sort_vals(int *a_stack, int *b_stack, int vals[3], int n)
{
	int	x;

	x = 1;
	while (vals[1] > 0 && vals[2] > 0)
		if (vals[1]-- >= 0 && vals[2]-- >= 0)
			rr(a_stack, b_stack, n);
	while (vals[1] < 0 && vals[2] < 0)
		if (vals[1]-- <= 0 && vals[2]-- <= 0)
			rrr(a_stack, b_stack, n);
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
