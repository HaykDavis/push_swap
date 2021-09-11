/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:22:45 by psoares           #+#    #+#             */
/*   Updated: 2021/09/07 14:39:04 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_sort_100(t_push **a, t_push **b)
{
	int	l;

	l = 0;
	while ((*a) != NULL)
	{
		if (l > 1 && (*a)->index <= l)
		{
			pb(a, b), l++;
			rb(b);
		}
		else if ((*a)->index <= l + 15)
			pb(a, b), l++;
		else if ((*a)->index >= l)
			ra(a);
	}
	do_sort_pa(a, b);
}

void	do_sort_500(t_push **a, t_push **b)
{
	int	l;

	l = 0;
	while ((*a) != NULL)
	{
		if (l > 1 && (*a)->index <= l)
		{
			pb(a, b), l++;
			rb(b);
		}
		else if ((*a)->index <= l + 30)
			pb(a, b), l++;
		else if ((*a)->index >= l)
			ra(a);
	}
	do_sort_pa(a, b);
}
