/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <psoares@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:33:49 by psoares           #+#    #+#             */
/*   Updated: 2021/09/09 14:33:50 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"

int	i_love_norminette(char	*buf)
{
	free(buf);
	return (-1);
}

int	check_byte_number(char *buf, char **ostatoc, size_t byte_number)
{
	buf[byte_number] = '\0';
	*ostatoc = ft_strjoin(*ostatoc, buf);
	if (!*ostatoc)
		return (0);
	return (1);
}

int	check_ostatok(char **ostatoc, char *pointer, char **line)
{
	char	*tmp;

	if (pointer && ft_strlen(*ostatoc))
	{
		*pointer = '\0';
		*line = ft_strdup(*ostatoc);
		tmp = ft_strdup(++pointer);
		free(*ostatoc);
		*ostatoc = tmp;
		if (!*ostatoc)
			return (0);
	}
	else if (!pointer && ft_strlen(*ostatoc))
	{
		*line = ft_strdup(*ostatoc);
		free(*ostatoc);
		*ostatoc = NULL;
	}
	else
	{
		*line = ft_strdup("\0");
		free(*ostatoc);
		*ostatoc = NULL;
	}
	return (*line != 0);
}

int	get_next_line(int fd, char **line)
{
	char		*buf;
	size_t		byte_number;
	char		*pointer;
	static char	*ostatok;

	if (fd < 0 || (read(fd, 0, 0) < 0) || !line || BUFFER_SIZE < 1)
		return (-1);
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (-1);
	pointer = NULL;
	byte_number = 1;
	while (!pointer && byte_number)
	{
		byte_number = read(fd, buf, BUFFER_SIZE);
		if (byte_number > 0)
			if (!check_byte_number(buf, &ostatok, byte_number))
				i_love_norminette(buf);
		pointer = ft_strchr(ostatok, '\n');
	}
	free(buf);
	if (!check_ostatok(&ostatok, pointer, line))
		return (-1);
	return (ostatok && pointer);
}
