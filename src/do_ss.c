/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:07 by psoares           #+#    #+#             */
/*   Updated: 2021/09/04 15:23:08 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_push **list_a)
{
	t_push	*tmp;
	t_push	*tmp1;

	tmp = *list_a;
	tmp1 = tmp->next->next;
	*list_a = (*list_a)->next;
	(*list_a)->next = tmp;
	(*list_a)->next->next = tmp1;
	write(1, "sa\n", 3);
}

void	sb(t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

	tmp = *list_b;
	tmp1 = tmp->next->next;
	*list_b = (*list_b)->next;
	(*list_b)->next = tmp;
	(*list_b)->next->next = tmp1;
	write(1, "sb\n", 3);
}

void	ss(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;
	t_push	*tmp1;

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
	write(1, "ss\n", 3);
}
