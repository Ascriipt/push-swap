/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:19:32 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/07 18:31:26 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int	is_sorted(int *a_stack, int ac)
{
	int	i;

	i = -1;
	while (++i < ac)
		if (a_stack[i] > a_stack[i + 1])
			return (0);
	return (1);
}

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
	if (stack[0] == '-')
		i = 0;
	while (stack[++i])
		if (!(stack[i] >= '0' && stack[i] <= '9'))
			return (0);
	if (i >= 10 && (ft_atoi(stack) > 2147483647
			|| ft_atoi(stack) < -2147483648))
		return (0);
	return (1);
}

int	is_valid(int *a_stack, int n)
{
	if (!a_stack)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!no_dup(a_stack, n))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (is_sorted(a_stack, n))
		return (-1);
	return (1);
}