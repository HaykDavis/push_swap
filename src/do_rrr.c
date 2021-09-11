/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:02 by psoares           #+#    #+#             */
/*   Updated: 2021/09/04 15:23:03 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_push **list_a)
{
	t_push	*tmp;
	t_push	*tmp1;

	tmp = *list_a;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*list_a = tmp->next;
	tmp->next = NULL;
	(*list_a)->next = tmp1;
	write(1, "rra\n", 4);
}

void	rrb(t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

	tmp = *list_b;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*list_b = tmp->next;
	tmp->next = NULL;
	(*list_b)->next = tmp1;
	write(1, "rrb\n", 4);
}

void	rrr(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

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
	write(1, "rr\n", 3);
}
