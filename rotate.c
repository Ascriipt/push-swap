/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:26:21 by Matteo            #+#    #+#             */
/*   Updated: 2022/04/04 18:06:33 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	ra(int *a_stack, int n)
{
	int	swop;
	int	i;

	i = 0;
	swop = a_stack[0];
	while (++i < n)
		a_stack[i - 1] = a_stack[i];
	a_stack[i - 1] = swop;
}

void	rb(int *b_stack, int n)
{
	int	swop;
	int	i;

	i = 0;
	swop = b_stack[0];
	while (++i < n)
		b_stack[i - 1] = b_stack[i];
	b_stack[i - 1] = swop;
}

void	rr(int *a_stack, int *b_stack, int n)
{
	ra(a_stack, n);
	rb(b_stack, n);
}