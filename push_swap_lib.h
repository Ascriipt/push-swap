/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:48:03 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/06 18:21:30 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_LIB_H
# define PUSH_SWAP_LIB_H

# include <stdlib.h>
# include <unistd.h>
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

void	lis_set(int val, int *arr, int size, int n);
void	lis_al(int *arr, int n);

int		bi(int *lis, int n);

/* Utils */

int		*fill_str_to_int(char **str, int n);
int		*icalloc(int *tab, int fill, int n);
int		count_int(char **str);
int		ft_atoi(char *str);

char	**ft_split(char const *s, char c);

void	free_ctab(char **tab);

/* Moves */

void	rrr(int *a_stack, int *b_stack, int n);
void	rr(int *a_stack, int *b_stack, int n);
void	ss(int *a_stack, int *b_stack);
void	pa(int *a, int *b, int n);
void	pb(int *a, int *b, int n);
void	rra(int *a_stack, int n);
void	rrb(int *b_stack, int n);
void	ra(int *a_stack, int n);
void	rb(int *b_stack, int n);
void	sa(int *a_stack);
void	sb(int *b_stack);

#endif