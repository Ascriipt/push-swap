/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:38:19 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/24 15:49:38 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int	ft_abs(int x)
{
	if (x < 0)
		x = -x;
	return (x);
}

int	smart_rotate_int(int nb, int n)
{
	int	i;

	i = 0;
	if (nb <= (n / 2) + 1)
		while (nb-- >= 0)
			i++;
	else
		while (nb++ <= n + 1)
			i--;
	return (i);
}

int	ina(int *a_stack, int x, int n)
{
	int	i;

	if (a_stack[0] > x)
		return (0);
	i = -1;
	if (x >= bi(a_stack, n))
		while (++i < n)
			if (a_stack[i + 1] == si(a_stack, n))
				return (smart_rotate_int(i, n));
	while (++i < n - 1)
		if (a_stack[i] < x && a_stack[i + 1] > x)
			return (smart_rotate_int(i, n));
	return (0);
}

int	ptm(int *a_stack, int *b_stack, int n)
{
	int	i;
	int	inb;
	int	vina;
	int	total;

	i = -1;
	if (!a_stack)
		return (0);
	while (++i <= lis_size(b_stack, n))
	{
		inb = smart_rotate_int(i, lis_size(b_stack, n));
		if (inb > -1)
			inb -= 1;
		else
			inb += 1;
		vina = ina(a_stack, b_stack[i], lis_size(a_stack, n));
		total = inb + vina;
		if (i > (lis_size(b_stack, n) / 2) + 1)
				total = inb - vina;
		printf("in[%d] = {%d, %d}\n", b_stack[i], vina, inb);
		printf("total[%d] = %d\n", b_stack[i], total);
	}
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
