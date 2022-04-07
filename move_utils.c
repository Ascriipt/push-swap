/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:45:23 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/07 18:50:05 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	smart_rotate(int *a_stack, int nb, int n)
{
	if (nb <= (n / 2))
		ra(a_stack, n);
	else
		rra(a_stack, n);
}
