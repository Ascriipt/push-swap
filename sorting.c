/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:52:38 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/24 19:07:07 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

/*
	printf("a_stack :\n");
	print_int_tab(a_stack, lis_size(a_stack, n) + 1);
	printf("b_stack :\n");
	print_int_tab(b_stack, lis_size(b_stack, n) + 1);
*/

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
	lis = NULL;
	tmp = icalloc(tmp, 0, n);
	lis = icalloc(lis, 0, n);
	smot(a_stack, tmp, n);
	lis_al(tmp, lis, n);
	print_int_tab(lis, lis_size(lis, n) + 1);
	fill_w_lis(a_stack, b_stack, lis, n);
	sort_after_lis(a_stack, b_stack, n);
	free(tmp);
	free(lis);
}

void	sort_after_lis(int *a_stack, int *b_stack, int n)
{
	int	vals[3];

	printf("a_stack :\n");
	print_int_tab(a_stack, lis_size(a_stack, n) + 1);
	printf("b_stack :\n");
	print_int_tab(b_stack, lis_size(b_stack, n) + 1);
	ptm(a_stack, b_stack, vals, n);
	//sort_vals(a_stack, b_stack, vals, n);
	printf("vals[0] = %d\nvala[1] = %d\nvalb[2] = %d\n", vals[0], vals[1] , vals[2]);
	printf("\n");
	printf("a_stack :\n");
	print_int_tab(a_stack, lis_size(a_stack, n) + 1);
	printf("b_stack :\n");
	print_int_tab(b_stack, lis_size(b_stack, n) + 1);
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
