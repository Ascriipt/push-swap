/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:15:59 by Matteo            #+#    #+#             */
/*   Updated: 2022/04/20 01:18:25 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	sa(int *a_stack, int w)
{
	int	swop;

	if (a_stack[1])
	{
		swop = a_stack[0];
		a_stack[0] = a_stack[1];
		a_stack[1] = swop;
	}
	if (w == 1)
		write(1, "sa\n", 3);
}

void	sb(int *b_stack, int w)
{
	int	swop;

	if (b_stack[1])
	{
		swop = b_stack[0];
		b_stack[0] = b_stack[1];
		b_stack[1] = swop;
	}
	if (w == 1)
		write(1, "sb\n", 3);
}

void	ss(int *a_stack, int *b_stack)
{
	sa(a_stack, 0);
	sb(b_stack, 0);
	write(1, "ss\n", 3);
}
