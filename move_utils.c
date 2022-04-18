/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:45:23 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/18 05:37:33 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

/*int	to_mv(int *a_stack, int *b_stack, int n)
{
	int	*to_move;
	int	i;
	int	j;

	to_move = NULL;
	to_move = icalloc(to_move, 0, lis_size(b_stack, n));
	i = -1;
	j = 0;
	while (++i < n)
	{
		if (i <= (n / 2))
	}
}*/

void	ruf(int	*stack, int x, int n)
{
	while (stack[0] != x)
		smart_rotate(stack, ffo(stack, x, n), n);
}

void	smart_rotate(int *a_stack, int nb, int n)
{
	if (nb <= (n / 2))
		ra(a_stack, n);
	else
		rra(a_stack, n);
}

int	lis_size(int *lis, int n)
{
	int	i;

	i = 0;
	while (i < n - 1 && !(lis[i] == 0 && lis[i + 1] == 0))
		i++;
	return (i - 1);
}

void	fill_w_lis(int *a_stack, int *b_stack, int *lis, int n)
{
	int	n_cpy;
	int	i;
	int	j;

	j = 0;
	i = -1;
	n_cpy = n;
	while (++i < n && j < n_cpy - (lis_size(lis, n_cpy) + 1))
	{
		if (is_lis(a_stack[i], lis, lis_size(lis, n_cpy)) == -1)
		{
			ruf(a_stack, a_stack[i], n);
			pb(a_stack, b_stack, n);
			j++;
			i = -1;
			n -= 1;
		}
	}
}
