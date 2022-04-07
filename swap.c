/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:15:59 by Matteo            #+#    #+#             */
/*   Updated: 2022/04/07 17:59:29 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	sa(int *a_stack)
{
	int	swop;

	if (a_stack[1])
	{
		swop = a_stack[0];
		a_stack[0] = a_stack[1];
		a_stack[1] = swop;
	}
}

void	sb(int *b_stack)
{
	int	swop;

	if (b_stack[1])
	{
		swop = b_stack[0];
		b_stack[0] = b_stack[1];
		b_stack[1] = swop;
	}
}

void	ss(int *a_stack, int *b_stack)
{
	sa(a_stack);
	sb(b_stack);
}
