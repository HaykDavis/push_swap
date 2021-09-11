/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:22:53 by psoares           #+#    #+#             */
/*   Updated: 2021/09/04 15:22:54 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;

	tmp = *list_b;
	*list_b = tmp->next;
	tmp->next = *list_a;
	*list_a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;

	tmp = *list_a;
	*list_a = tmp->next;
	tmp->next = *list_b;
	*list_b = tmp;
	write(1, "pb\n", 3);
}
