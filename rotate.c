/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:26:21 by Matteo            #+#    #+#             */
/*   Updated: 2022/04/24 19:15:49 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	ra(int *a_stack, int w, int n)
{
	int	swop;
	int	i;

	i = 0;
	swop = a_stack[0];
	while (++i < n)
		a_stack[i - 1] = a_stack[i];
	a_stack[i - 1] = swop;
	if (w == 1)
		write(1, "ra\n", 3);
}

void	rb(int *b_stack, int w, int n)
{
	int	swop;
	int	i;

	i = 0;
	swop = b_stack[0];
	while (++i < n)
		b_stack[i - 1] = b_stack[i];
	b_stack[i - 1] = swop;
	if (w == 1)
		write(1, "rb\n", 3);
}

void	rr(int *a_stack, int *b_stack, int n)
{
	ra(a_stack, 0, lis_size(a_stack, n));
	rb(b_stack, 0, lis_size(b_stack, n));
	write(1, "rr\n", 3);
}
