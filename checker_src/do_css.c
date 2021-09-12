/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_css.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:07 by psoares           #+#    #+#             */
/*   Updated: 2021/09/09 16:28:14 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	csa(t_push **list_a)
{
	t_push	*tmp;
	t_push	*tmp1;

	if ((*list_a))
	{
		if ((*list_a)->next)
		{
			tmp = *list_a;
			tmp1 = tmp->next->next;
			*list_a = (*list_a)->next;
			(*list_a)->next = tmp;
			(*list_a)->next->next = tmp1;
		}
	}
	return (1);
}

int	csb(t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

	if ((*list_b))
	{
		if ((*list_b)->next)
		{
			tmp = *list_b;
			tmp1 = tmp->next->next;
			*list_b = (*list_b)->next;
			(*list_b)->next = tmp;
			(*list_b)->next->next = tmp1;
		}
	}
	return (1);
}

int	css(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

	if ((*list_b) && (*list_a))
	{
		if ((*list_b)->next && (*list_a)->next)
		{
			tmp = *list_a;
			tmp1 = tmp->next->next;
			*list_a = (*list_a)->next;
			(*list_a)->next = tmp;
			(*list_a)->next->next = tmp1;
			tmp = *list_b;
			tmp1 = tmp->next->next;
			*list_b = (*list_b)->next;
			(*list_b)->next = tmp;
			(*list_b)->next->next = tmp1;
		}
	}
	return (1);
}
