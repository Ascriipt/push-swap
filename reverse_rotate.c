/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:16:04 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/07 19:11:16 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	rra(int *a_stack, int n)
{
	int	swop;
	int	i;

	i = n;
	swop = a_stack[n - 1];
	while (--i > 0)
		a_stack[i] = a_stack[i - 1];
	a_stack[0] = swop;
	write(1, "rra\n", 4);
}

void	rrb(int *b_stack, int n)
{
	int	swop;
	int	i;

	i = n;
	swop = b_stack[n - 1];
	while (--i > 0)
		b_stack[i] = b_stack[i - 1];
	b_stack[0] = swop;
	write(1, "rrb\n", 4);
}

void	rrr(int *a_stack, int *b_stack, int n)
{
	rra(a_stack, n);
	rrb(b_stack, n);
}
