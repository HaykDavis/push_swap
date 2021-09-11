/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_crrr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:02 by psoares           #+#    #+#             */
/*   Updated: 2021/09/09 16:27:42 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	crra(t_push **list_a)
{
	t_push	*tmp;
	t_push	*tmp1;

	if ((*list_a) != NULL)
	{
		tmp = *list_a;
		tmp1 = tmp;
		while (tmp->next->next)
			tmp = tmp->next;
		*list_a = tmp->next;
		tmp->next = NULL;
		(*list_a)->next = tmp1;
		return (1);
	}
	return (0);
}

int	crrb(t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

	if ((*list_b) != NULL)
	{
		tmp = *list_b;
		tmp1 = tmp;
		while (tmp->next->next)
			tmp = tmp->next;
		*list_b = tmp->next;
		tmp->next = NULL;
		(*list_b)->next = tmp1;
		return (1);
	}
	return (0);
}

int	crrr(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

	if ((*list_b) != NULL && (*list_a) != NULL)
	{
		tmp = *list_a;
		tmp1 = tmp;
		while (tmp->next->next)
			tmp = tmp->next;
		*list_a = tmp->next;
		tmp->next = NULL;
		(*list_a)->next = tmp1;
		tmp = *list_b;
		tmp1 = tmp;
		while (tmp->next->next)
			tmp = tmp->next;
		*list_b = tmp->next;
		tmp->next = NULL;
		(*list_b)->next = tmp1;
		return (1);
	}
	return (0);
}
