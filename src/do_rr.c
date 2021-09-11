/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:22:57 by psoares           #+#    #+#             */
/*   Updated: 2021/09/04 15:22:58 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_push **list_a)
{
	t_push	*tmp;
	t_push	*tmp1;

	tmp = *list_a;
	tmp1 = *list_a;
	*list_a = (*list_a)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

	tmp = *list_b;
	tmp1 = *list_b;
	*list_b = (*list_b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp1;
	tmp->next->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

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
	write(1, "rr\n", 3);
}
