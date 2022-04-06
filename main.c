/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:25:44 by Matteo            #+#    #+#             */
/*   Updated: 2022/04/06 18:08:34 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

/* Remove print_int_tab */

void	print_int_tab(int *tab, int n)
{
	int	i;

	i = -1;
	while (++i < n && tab)
		printf("%d\n", tab[i]);
}

void	ft_free(int *a_stack, int *b_stack, char **stack)
{
	if (stack)
		free_ctab(stack);
	free(stack);
	free(a_stack);
	free(b_stack);
}

	/*printf("%d\n", ac);
	pa(a_stack, b_stack, ac);
	print_int_tab(b_stack, ac + 1);*/

static void	sort_sort(int *a_stack, int b_stack, int n)
{
	if (is_valid(a_stack))
	{
		return ;
	}
	return ;
}

int	main(int ac, char **av)
{
	t_stack	stacks;

	stacks.a_stack = NULL;
	stacks.b_stack = NULL;
	stacks.stack = NULL;
	if (ac == 2)
	{
		stacks.stack = ft_split(av[1], 32);
		stacks.a_stack = fill_str_to_int(stacks.stack, count_int(stacks.stack));
		ac = count_int(stacks.stack);
	}
	else if (ac > 2)
	{
		stacks.a_stack = fill_str_to_int(av + 1, ac);
		ac -= 1;
	}
	stacks.b_stack = icalloc(stacks.b_stack, 0, ac);
	ft_free(stacks.a_stack, stacks.b_stack, stacks.stack);
	return (0);
}
