/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:40 by psoares           #+#    #+#             */
/*   Updated: 2021/09/09 14:35:30 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_push
{
	int				number;
	int				index;
	struct s_push	*next;
}				t_push;

void	sa(t_push **list_a);
void	sb(t_push **list_b);
void	ra(t_push **list_a);
void	rb(t_push **list_b);
void	rra(t_push **list_a);
void	rrb(t_push **list_b);
void	ss(t_push **list_a, t_push **list_b);
void	rr(t_push **list_a, t_push **list_b);
void	rrr(t_push **list_a, t_push **list_b);
void	pa(t_push **list_a, t_push **list_b);
void	pb(t_push **list_a, t_push **list_b);

void	do_error(void);
void	do_sort_3(t_push **a);
void	do_sort_2(t_push **a);
void	print(t_push *prlist);
void	push(t_push **plist, int data);
void	do_index(t_push **a, int size);
void	do_sort_4(t_push **a, t_push **b);
void	do_sort_5(t_push **a, t_push **b);
void	do_sort_pa(t_push **a, t_push **b);
void	check_rep(t_push **list, int argc);
void	do_sort_100(t_push **a, t_push **b);
void	do_sort_500(t_push **a, t_push **b);
void	sort(t_push **a, t_push **b, int count);

long int		ft_atoi(char *str);
int		minchr(t_push **a);
int		maxchr(t_push **a);
int		numb_amo(t_push **a);
int		is_sorted(t_push *a);
int		do_arr(t_push *b, int *num);
int		do_arr2(t_push *b, int *num);
int		bubl_sort_arr(int *num, int size);
int		eq_src(t_push **a, int med, int i);

int		cpa(t_push **list_a, t_push **list_b);
int		cpb(t_push **list_a, t_push **list_b);
int		cra(t_push **list_a);
int		crb(t_push **list_b);
int		crr(t_push **list_a, t_push **list_b);
int		csa(t_push **list_a);
int		csb(t_push **list_b);
int		css(t_push **list_a, t_push **list_b);
int		crra(t_push **list_a);
int		crrb(t_push **list_b);
int		crrr(t_push **list_a, t_push **list_b);

int		ft_strcmp(const char *str1, const char *str2);
int		check_stacks(char *line, t_push **one, t_push **two);

#endif