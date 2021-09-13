/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:36 by psoares           #+#    #+#             */
/*   Updated: 2021/09/13 19:32:28 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	static t_push		*a;
	static t_push		*b;
	static int			i;
	int					d;

	if (argc > 1)
	{
		while (argc != 1)
		{
			d = ft_atoi(argv[--argc]);
			if (d < 0 && argv[argc][0] != '-')
				do_error();
			if (d > 0 && argv[argc][0] == '-')
				do_error();
			push(&a, d);
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
