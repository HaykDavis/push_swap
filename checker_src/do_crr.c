/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_crr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:22:57 by psoares           #+#    #+#             */
/*   Updated: 2021/09/09 16:27:10 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	cra(t_push **list_a)
{
	t_push	*tmp;
	t_push	*tmp1;

	if ((*list_a) != NULL)
	{
		tmp = *list_a;
		tmp1 = *list_a;
		*list_a = (*list_a)->next;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = tmp1;
		tmp->next->next = NULL;
		return (1);
	}
	return (0);
}

int	crb(t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

	if ((*list_b) != NULL)
	{
		tmp = *list_b;
		tmp1 = *list_b;
		*list_b = (*list_b)->next;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = tmp1;
		tmp->next->next = NULL;
		return (1);
	}
	return (0);
}

int	crr(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

	if ((*list_b) != NULL && (*list_a) != NULL)
	{
		tmp = *list_a;
		tmp1 = *list_a;
		*list_a = (*list_a)->next;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = tmp1;
		tmp->next->next = NULL;
		tmp = *list_b;
		tmp1 = *list_b;
		*list_b = (*list_b)->next;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = tmp1;
		tmp->next->next = NULL;
		return (1);
	}
	return (0);
}
