/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:17 by psoares           #+#    #+#             */
/*   Updated: 2021/09/07 12:51:18 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_error(void)
{
	write(1, "Error\n", 6);
	exit (0);
}

int	part_of_atoi(char *str, int	i, int point)
{
	int	n;

	n = 0;
	while (str[i])
	{
		if (n > 214748364 || n < -214748364)
			do_error();
		if (str[i] < '0' || str[i] > '9')
			do_error();
		if (n > 214748364 && (str[i + 1] - '0') >= 7)
			return (-1);
		else if (n < -214748364 && (str[i + 1] - '0') >= 8)
			return (0);
		n = 10 * n + point * (str[i] - '0');
		i++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	i;
	int	point;
	int	n;

	i = 0;
	n = 0;
	point = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			point *= -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		n = part_of_atoi(str, i, point);
	else
		do_error();
	return (n);
}

void	check_rep(t_push **list, int argc)
{
	t_push			*list1;
	int				*num;
	static int		i;
	static int		z;
	static int		m;

	list1 = *list;
	num = malloc(sizeof(int) * argc);
	if (!num)
		return ;
	*num = do_arr(*list, num);
	while (argc > m)
	{
		z = num[m];
		i = m + 1;
		while (argc > i)
		{
			if (num[i] == z)
				free(num), do_error();
			i++;
		}
		m++;
	}
	free(num);
}

void	sort(t_push **a, t_push **b, int count)
{
	if (count == 2)
		do_sort_2(a);
	if (count == 3)
		do_sort_3(a);
	if (count == 4)
		do_sort_4(a, b);
	if (count == 5)
		do_sort_5(a, b);
	if (5 < count && count <= 100)
		do_sort_100(a, b);
	if (100 < count)
		do_sort_500(a, b);
}
