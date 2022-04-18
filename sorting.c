/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:52:38 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/18 05:08:12 by maparigi         ###   ########.fr       */
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

void	sort_sup_three(int *a_stack, int *b_stack, int n)
{
	int	*lis;

	lis = NULL;
	lis = icalloc(lis, 0, n);
	lis_al(a_stack, lis, n);
	print_int_tab(lis, lis_size(lis, n) + 1);
	fill_w_lis(a_stack, b_stack, lis, n);
	printf("a_stack :\n");
	print_int_tab(a_stack, lis_size(a_stack, n) + 1);
	printf("b_stack :\n");
	print_int_tab(b_stack, lis_size(b_stack, n) + 1);
	free(lis);
}

void	sort_by_size(int *a_stack, int *b_stack, int ac)
{
	if (ac < 3)
		print_int_tab(b_stack, ac);
	else if (ac == 3 && !is_sorted(a_stack, ac))
		sort_three(a_stack);
	else if (ac > 3)
		sort_sup_three(a_stack, b_stack, ac);
}
