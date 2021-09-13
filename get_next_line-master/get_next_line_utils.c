/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:33:44 by psoares           #+#    #+#             */
/*   Updated: 2021/09/13 12:25:03 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		p;
	char	*ptr;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	free(s1);
	s1 = NULL;
	p = 0;
	while (s2[p] != '\0')
		ptr[i++] = s2[p++];
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strchr(const char *str, int ch)
{
	int	i;
	int	z;

	if (!str)
		return (NULL);
	i = 0;
	z = (int)ft_strlen(str);
	while (i <= z)
	{
		if (str[i] == (char)ch)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dubl;
	char	*dubl2;
	int		i;

	if (!str)
		return (NULL);
	dubl = (char *)malloc(sizeof(*dubl) * ft_strlen(str) + 1);
	if (!dubl)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dubl[i] = str[i];
		i++;
	}
	dubl[i] = '\0';
	dubl2 = dubl;
	free(dubl2);
	return (dubl);
}
