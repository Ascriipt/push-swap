/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:19:32 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/06 19:51:17 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int	no_dup(int *a_stack, int n)
{
	int	i;
	int	j;

	i = -1;
	while (++i < n - 1)
	{
		j = i;
		while (++j < n)
			if (a_stack[i] == a_stack[j])
				return (0);
	}
	return (1);
}

int	is_digit(char *stack)
{
	int	i;

	i = -1;
	while (stack[++i])
		if (!(stack[i] >= '0' && stack[i] <= '9') && stack[0] != '-')
			return (0);
	return (1);
}
