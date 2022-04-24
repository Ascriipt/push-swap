/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:38:19 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/24 20:10:23 by maparigi         ###   ########.fr       */
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

	i = -1;
	if (x >= bi(a_stack, n))
		while (++i < n)
			if (a_stack[i + 1] == si(a_stack, n))
				return (smart_rotate_int(i, lis_size(a_stack, n)));
	while (++i < n - 1)
		if (a_stack[i] < x && a_stack[i + 1] > x)
			return (smart_rotate_int(i, lis_size(a_stack, n)));
	return (0);
}

void	ptm(int *a_stack, int *b_stack, int vals[3], int n)
{
	int	i;
	int	j;
	int	inb;
	int	vina;

	i = -1;
	j = 0;
	while (++i <= lis_size(b_stack, n))
	{
		inb = smart_rotate_int(i, lis_size(b_stack, n));
		if (inb > 0)
			inb -= 1;
		else if (inb < 0)
			inb += 1;
		vina = ina(a_stack, b_stack[i], lis_size(a_stack, n));
		if (j++ == 0 || (ft_total(vina, inb)
				< ft_total(vals[1], vals[2])))
		{
			vals[0] = b_stack[i];
			vals[1] = vina;
			vals[2] = inb;
		}
	}
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
