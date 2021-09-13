/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:36 by psoares           #+#    #+#             */
/*   Updated: 2021/09/13 23:41:07 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	static t_push		*a;
	static t_push		*b;
	static int			i;
	int					tmp;

	if (argc > 1)
	{
		while (argc != 1)
		{
			tmp = ft_atoi(argv[--argc]);
			if (tmp < 0 && argv[argc][0] != '-')
				do_error();
			if (tmp > 0 && argv[argc][0] == '-')
				do_error();
			push(&a, tmp);
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
