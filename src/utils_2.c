/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:10 by psoares           #+#    #+#             */
/*   Updated: 2021/09/08 13:36:38 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	bubl_sort_arr(int *num, int size)
{
	int			j;
	int			i;
	int			temp;

	if (!num || !size)
		return (0);
	i = 0;
	temp = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (num[j - 1] > num[j])
			{
				temp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = temp;
			}
			j--;
		}
		i++;
	}
	return (*num);
}

int	do_int_arr(int *num, int *num1, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		num1[i] = num[i];
		i++;
	}
	return (*num1);
}

int	index_chr(int *num, int num2)
{
	int	i;

	i = 0;
	while (num[i] != num2)
		i++;
	return (i);
}

void	do_index(t_push **a, int size)
{
	t_push		*b;
	t_push		*z;
	int			l;
	int			*num;
	int			*num1;

	l = 0;
	b = *a;
	z = b;
	num = malloc(sizeof(int) * (size + 1));
	num1 = malloc(sizeof(int) * (size + 1));
	if (!num || !num1)
		return ;
	*num = do_arr(b, num);
	*num1 = do_int_arr(num, num1, size);
	*num = bubl_sort_arr(num, size);
	while (z != NULL)
	{
		z->index = index_chr(num, num1[l]);
		z = z->next;
		l++;
	}
	free(num);
	free(num1);
}
