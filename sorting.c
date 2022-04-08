/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:52:38 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/08 20:35:42 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	sort_three(int *a_stack)
{
	if (a_stack[0] > a_stack[1] && a_stack[0] < a_stack[2])
		sa(a_stack);
	else if (a_stack[0] > a_stack[1] && a_stack[1] > a_stack[2]
		&& a_stack[2] > -1)
	{
		sa(a_stack);
		rra(a_stack, 3);
	}
	else if (a_stack[0] > a_stack[1] && a_stack[0] > a_stack[2])
		ra(a_stack, 3);
	else if (a_stack[0] < a_stack[1] && a_stack[0] < a_stack[2])
	{
		sa(a_stack);
		ra(a_stack, 3);
	}
	else if (a_stack [0] < a_stack[1] && a_stack[0] > a_stack[2])
		rra(a_stack, 3);
}

void	sort_by_size(int *a_stack, int *b_stack, int ac)
{
	if (ac < 3)
		print_int_tab(b_stack, ac);
	if (ac == 3 && !is_sorted(a_stack, ac))
		sort_three(a_stack);
	else
	{
		lis_al(a_stack, b_stack, ac);
		print_int_tab(b_stack, ac);
		printf("\n");
	}
	print_int_tab(a_stack, ac);
}