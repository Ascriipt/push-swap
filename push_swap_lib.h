/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:48:03 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/24 19:55:32 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_LIB_H
# define PUSH_SWAP_LIB_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
/* remove stdio.h*/
# include <stdio.h>

/* Necessary Variables */

typedef struct n_stack
{
	int		*a_stack;
	int		*b_stack;
	char	**stack;
}			t_stack;

/* REMOVE */

void	print_int_tab(int *tab, int n);

/* LIS */

void	lis_al(int *arr, int *tofill, int n);
void	lis_set(int *lis, int *arr, int *tofill, int n);

int		ffo(int *arr, int to_find, int n);
int		is_lis(int x, int *lis, int n);
int		bi(int *lis, int n);

/* Utils */

long	ft_atoi(char *str);

int		*fill_str_to_int(char **str, int n);
int		*icalloc(int *tab, int fill, int n);
int		count_int(char **str);
int		ft_abs(int x);

char	**ft_split(char const *s, char c);

void	free_ctab(char **tab);

/* Checks */

int		is_sorted(int *a_stack, int ac);
int		is_valid(int *a_stack, int n);
int		no_dup(int *a_stack, int n);
int		is_digit(char *stack);

/* Setup */

void	smot(int *stack, int *tmp, int n);

int		ft_total(int ina, int inb);
int		si(int *lis, int n);

/* Sort */

void	sort_vals(int *a_stack, int *b_stack, int vals[3], int n);
void	sort_bx(int *a_stack, int *b_stack, int vals[3], int n);
void	ptm(int *a_stack, int *b_stack, int vals[3], int n);
void	sort_after_lis(int *a_stack, int *b_stack, int n);
void	sort_sup_three(int *a_stack, int *b_stack, int n);
void	sort_by_size(int *a_stack, int *b_stack, int ac);
void	sort_three(int *a_stack);

int		ina(int *a_stack, int x, int n);

/* Moves Utilities */

void	fill_w_lis(int *a_stack, int *b_stack, int *lis, int n);
void	smart_rotate(int *a_stack, int nb, int n);
void	ruf(int	*stack, int x, int n);

int		smart_rotate_int(int nb, int n);
int		to_mv(int *a_stack, int *b_stack, int n);
int		lis_size(int *lis, int n);

/* Moves */

void	rrr(int *a_stack, int *b_stack, int n);
void	rr(int *a_stack, int *b_stack, int n);
void	pa(int *a, int *b, int w, int n);
void	pb(int *a, int *b, int w, int n);
void	rra(int *a_stack, int w, int n);
void	rrb(int *b_stack, int w, int n);
void	ss(int *a_stack, int *b_stack);
void	ra(int *a_stack, int w, int n);
void	rb(int *b_stack, int w, int n);
void	sa(int *a_stack, int w);
void	sb(int *b_stack, int w);

#endif