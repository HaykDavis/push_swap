/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:36 by psoares           #+#    #+#             */
/*   Updated: 2021/09/08 23:40:59 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	static t_push		*a;
	static t_push		*b;
	static int			i;

	if (argc > 2)
	{
		while (argc != 1)
		{
			push(&a, ft_atoi(argv[--argc]));
			if (a->number > INT_MAX || a->number < INT_MIN)
				do_error();
			i++;
		}
	}
	if (a && i)
	{
		check_rep(&a, i);
		do_index(&a, i);
		if (is_sorted(a))
			sort(&a, &b, i);
	}
	return (0);
}
