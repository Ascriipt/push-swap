/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:52:38 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/21 18:37:00 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	sort_three(int *stack)
{
	if (stack[0] > stack[1] && stack[0] < stack[2])
		sa(stack, 1);
	else if (stack[0] > stack[1] && stack[1] > stack[2])
	{
		sa(stack, 1);
		rra(stack, 1, 3);
	}
	else if (stack[0] > stack[1] && stack[0] > stack[2])
		ra(stack, 1, 3);
	else if (stack[0] < stack[1] && stack[0] < stack[2])
	{
		sa(stack, 1);
		ra(stack, 1, 3);
	}
	else if (stack [0] < stack[1] && stack[0] > stack[2])
		rra(stack, 1, 3);
}

void	sort_sup_three(int *a_stack, int *b_stack, int n)
{
	int	*lis;
	int	*tmp;

	tmp = NULL;
	tmp = icalloc(tmp, 0, n);
	lis = NULL;
	lis = icalloc(lis, 0, n);
	smot(a_stack, tmp, n);
	lis_al(tmp, lis, n);
	fill_w_lis(a_stack, b_stack, lis, n);
	printf("a_stack :\n");
	print_int_tab(a_stack, lis_size(a_stack, n) + 1);
	printf("b_stack :\n");
	print_int_tab(b_stack, lis_size(b_stack, n) + 1);
	free(tmp);
	free(lis);
}

void	sort_by_size(int *a_stack, int *b_stack, int ac)
{
	if (ac < 3)
		print_int_tab(b_stack, ac);
	else if (ac == 3 && !is_sorted(a_stack, ac))
	{
		sort_three(a_stack);
		print_int_tab(a_stack, ac);
	}
	else if (ac > 3)
		sort_sup_three(a_stack, b_stack, ac);
}
