/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:23 by psoares           #+#    #+#             */
/*   Updated: 2021/09/08 13:40:36 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print(t_push *prlist)
{
	t_push	*l;

	l = prlist;
	while (l != NULL)
	{
		printf("%d ", l->number);
		l = l->next;
	}
	printf("\n");
}

void	push(t_push **plist, int data)
{
	t_push	*p;

	if (!plist)
		return ;
	p = malloc(sizeof(t_push));
	if (!p)
		return ;
	p->number = data;
	p->next = *plist;
	*plist = p;
}

int	minchr(t_push **a)
{
	int		i;
	t_push	*p;

	i = 0;
	p = *a;
	i = p->index;
	while (p != NULL)
	{
		if (i > p->index)
			i = p->index;
		p = p->next;
	}
	return (i);
}

int	maxchr(t_push **a)
{
	int		i;
	t_push	*p;

	i = 0;
	p = *a;
	i = p->index;
	while (p != NULL)
	{
		if (i < p->index)
			i = p->index;
		p = p->next;
	}
	return (i);
}
