/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:25:44 by Matteo            #+#    #+#             */
/*   Updated: 2022/04/20 02:25:36 by maparigi         ###   ########.fr       */
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
	printf("\n");
}

/*void	testx(int *a, int *b, int ac)
{
	sa(a);
	printf("a_stack :\n");
	print_int_tab(a, ac);
	printf("b_stack :\n");
	print_int_tab(b, ac);
	pb(a, b, ac);
	pb(a, b, ac);
	pb(a, b, ac);
	printf("a_stack :\n");
	print_int_tab(a, ac);
	printf("b_stack :\n");
	print_int_tab(b, ac);
	ra(a, ac);
	rb(b, ac);
	printf("a_stack :\n");
	print_int_tab(a, ac);
	printf("b_stack :\n");
	print_int_tab(b, ac);
	rra(a, ac);
	rrb(b, ac);
	printf("a_stack :\n");
	print_int_tab(a, ac);
	printf("b_stack :\n");
	print_int_tab(b, ac);
	sa(a);
	printf("a_stack :\n");
	print_int_tab(a, ac);
	printf("b_stack :\n");
	print_int_tab(b, ac);
	pa(a, b, ac);
	pa(a, b, ac);
	pa(a, b, ac);
	printf("a_stack :\n");
	print_int_tab(a, ac);
	printf("b_stack :\n");
	print_int_tab(b, ac);
}*/

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

/*static void	sort_sort(int *a_stack, int *b_stack, int n)
{
	if (is_valid(a_stack))
	{
		return ;
	}
	return ;
}*/

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
	if (ac > 2 && is_valid(stacks.a_stack, ac))
		sort_by_size(stacks.a_stack, stacks.b_stack, ac);
	ft_free(stacks.a_stack, stacks.b_stack, stacks.stack);
	return (0);
}
