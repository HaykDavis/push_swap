/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:20 by psoares           #+#    #+#             */
/*   Updated: 2021/09/08 13:35:20 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	eq_src(t_push **a, int med, int i)
{
	int		z;
	int		*num;

	num = malloc(sizeof(int) * (i + 1));
	if (!num)
		return (0);
	*num = do_arr2(*a, num);
	z = i;
	while (num[i] != med)
		i--;
	z = z - i;
	i = 0;
	while (num[i] != med)
		i++;
	free(num);
	if (z < i)
		return (1);
	return (0);
}

void	do_sort_pa(t_push **a, t_push **b)
{
	while ((*b) != NULL)
	{
		if (!b)
			break ;
		if ((*b)->index != maxchr(b) && !eq_src(b, maxchr(b), numb_amo(b)))
			rb(b);
		else if ((*b)->index != maxchr(b) && eq_src(b, maxchr(b), numb_amo(b)))
			rrb(b);
		else if ((*b)->index == maxchr(b))
			pa(a, b);
	}
}

int	numb_amo(t_push **a)
{
	t_push	*b;
	int		i;

	i = 0;
	b = *a;
	while (b->next != NULL)
		b = b->next, i++;
	return (i);
}

int	is_sorted(t_push *a)
{
	while (a->next != NULL)
	{
		if ((a->index + 1) == a->next->index)
			a = a->next;
		else
			return (1);
	}
	return (0);
}
