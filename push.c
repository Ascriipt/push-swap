/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 23:19:29 by Matteo            #+#    #+#             */
/*   Updated: 2022/04/20 01:27:18 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	pb(int *a, int *b, int w, int n)
{
	int	swop;
	int	i;

	i = n;
	swop = a[0];
	a[0] = 0;
	ra(a, 0, n);
	while (--i > 0)
		b[i] = b[i - 1];
	b[0] = swop;
	if (w == 1)
		write(1, "pb\n", 3);
}

void	pa(int *a, int *b, int w, int n)
{
	int	swop;
	int	i;

	i = n;
	swop = b[0];
	b[0] = 0;
	ra(b, 0, n);
	while (--i > 0)
		a[i] = a[i - 1];
	a[0] = swop;
	if (w == 1)
		write(1, "pa\n", 3);
}
