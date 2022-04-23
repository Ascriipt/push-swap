/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:38:19 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/23 17:40:09 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int	smart_rotate_int(int nb, int n)
{
	int	i;

	i = 0;
	if (nb <= (n / 2))
		while (nb-- >= 0)
			i++;
	else
		while (nb++ <= n + 1)
			i++;
	return (i);
}

int	ptm(int *a_stack, int *b_stack, int n)
{
	int	i;
	int	inb;

	i = -1;
	if (!a_stack)
		return (0);
	while (++i <= lis_size(b_stack, n))
	{
		inb = smart_rotate_int(i, lis_size(b_stack, n));
		printf("inb of %d = %d\n", b_stack[i], inb);
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
