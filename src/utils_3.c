/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:23:13 by psoares           #+#    #+#             */
/*   Updated: 2021/09/09 15:33:25 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	do_arr2(t_push *b, int *num)
{
	int	d;

	if (!b || !num)
		return (0);
	d = 0;
	while (b)
	{
		num[d] = b->index;
		b = b->next;
		d++;
	}
	return (*num);
}

int	do_arr(t_push *b, int *num)
{
	int	d;

	if (!b || !num)
		return (0);
	d = 0;
	while (b)
	{
		num[d] = b->number;
		b = b->next;
		d++;
	}
	return (*num);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*z1;
	unsigned char	*z2;

	z1 = (unsigned char *)s1;
	z2 = (unsigned char *)s2;
	if (*z1 == '\0')
		return (-(*z2));
	if (*z2 == '\0')
		return (*z1);
	while (*z1 != '\0' || *z2 != '\0')
	{
		if (*z1 != *z2)
			return (*z1 - *z2);
		z1++;
		z2++;
	}
	return (0);
}
