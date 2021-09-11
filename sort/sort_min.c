/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:22:48 by psoares           #+#    #+#             */
/*   Updated: 2021/09/08 13:32:29 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_sort_2(t_push **a)
{
	if ((*a)->next->index < (*a)->index)
		sa(a);
}

void	do_sort_3(t_push **a)
{
	if ((*a)->index == maxchr(a))
		ra(a);
	if ((*a)->index == minchr(a) && (*a)->next->index == maxchr(a))
	{
		rra(a);
		sa(a);
	}
	if ((*a)->index != minchr(a) && (*a)->index > (*a)->next->index)
		sa(a);
	if ((*a)->index != minchr(a) && (*a)->index < (*a)->next->index)
		rra(a);
}

void	do_sort_4(t_push **a, t_push **b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*a)->index > minchr(a) && !eq_src(a, minchr(a), numb_amo(a)))
			ra(a);
		else if ((*a)->index > minchr(a) && eq_src(a, minchr(a), numb_amo(a)))
			rra(a);
		else
			pb(a, b), i++;
	}
	if ((*a)->index != minchr(a))
		sa(a);
	while ((*b) != NULL)
		pa(a, b);
}

void	do_sort_5(t_push **a, t_push **b)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if ((*a)->index > minchr(a) && !eq_src(a, minchr(a), numb_amo(a)))
			ra(a);
		else if ((*a)->index > minchr(a) && eq_src(a, minchr(a), numb_amo(a)))
			rra(a);
		else
			pb(a, b), i++;
	}
	if ((*a)->index != minchr(a))
		sa(a);
	while ((*b) != NULL)
		pa(a, b);
}
