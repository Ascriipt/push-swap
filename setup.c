/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 01:08:44 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/20 01:28:01 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int	si(int *lis, int n)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (++i < n)
		if (lis[i] < j)
			j = lis[i];
	return (j);
}

int	*smot(int *stack, int n)
{
	print_int_tab(stack, n);
	printf("si = %d\n", si(stack, n));
	return (stack);
}
