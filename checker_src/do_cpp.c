/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_cpp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:22:53 by psoares           #+#    #+#             */
/*   Updated: 2021/09/09 16:25:58 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	cpa(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;

	if ((*list_b) != NULL)
	{
		tmp = *list_b;
		*list_b = tmp->next;
		tmp->next = *list_a;
		*list_a = tmp;
	}
	return (1);
}

int	cpb(t_push **list_a, t_push **list_b)
{
	t_push	*tmp;

	if ((*list_a) != NULL)
	{
		tmp = *list_a;
		*list_a = tmp->next;
		tmp->next = *list_b;
		*list_b = tmp;
	}
	return (1);
}
