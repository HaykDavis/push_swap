/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:21:09 by psoares           #+#    #+#             */
/*   Updated: 2021/09/09 18:34:00 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../get_next_line.h"

int	check_stacks(char *line, t_push **one, t_push **two)
{
	if (!(ft_strcmp(line, "sa")))
		return (csa(one));
	if (!(ft_strcmp(line, "sb")))
		return (csb(two));
	if (!(ft_strcmp(line, "ss")))
		return (css(one, two));
	if (!(ft_strcmp(line, "pa")))
		return (cpa(one, two));
	if (!(ft_strcmp(line, "pb")))
		return (cpb(one, two));
	if (!(ft_strcmp(line, "ra")))
		return (cra(one));
	if (!(ft_strcmp(line, "rb")))
		return (crb(two));
	if (!(ft_strcmp(line, "rr")))
		return (crr(one, two));
	if (!(ft_strcmp(line, "rra")))
		return (crra(one));
	if (!(ft_strcmp(line, "rrb")))
		return (crrb(two));
	if (!(ft_strcmp(line, "rrr")))
		return (crrr(one, two));
	return (0);
}

void	do_gnl(t_push *one, t_push *two)
{
	char	*line;

	while (get_next_line(0, &line))
	{
		if (!(check_stacks(line, &one, &two)))
			do_error();
		free(line);
		line = NULL;
	}
	if ((!is_sorted(one)) && !two)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char *argv[])
{
	static t_push		*one;
	static t_push		*two;
	static int			i;

	if (argc > 2)
	{
		while (argc != 1)
		{
			push(&one, ft_atoi(argv[--argc]));
			if (one->number > INT_MAX || one->number < INT_MIN)
				do_error();
			i++;
		}
	}
	if (!one)
		do_error();
	do_index(&one, i);
	do_gnl(one, two);
}
