/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:11:48 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/06 20:19:48 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	free_ctab(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
}

int	*icalloc(int *tab, int fill, int n)
{
	int	i;

	tab = malloc(sizeof(int) * n);
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < n)
		tab[i] = fill;
	return (tab);
}

long int	ft_atoi(char *str)
{
	long int	sign;
	long int	atoi;

	sign = 1;
	atoi = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		atoi = atoi * 10 + *str - '0';
		str++;
	}
	return (atoi * sign);
}

int	count_int(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*fill_str_to_int(char **str, int n)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * n + 1);
	if (!tab)
		return (NULL);
	i = -1;
	while (str[++i])
	{
		tab[i] = (int)atoi(str[i]);
		if (!is_digit(str[i]))
		{
			free(tab);
			return (NULL);
		}
	}
	return (tab);
}
