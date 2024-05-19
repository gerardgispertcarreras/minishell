/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:12:26 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/19 18:50:26 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void	*read_is_minus_one(char **line, char **buffer)
{
	free(*line);
	free(*buffer);
	*line = NULL;
	*buffer = NULL;
	return (NULL);
}

size_t	new_line_position(char *buffer)
{
	size_t	i;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i ++;
	if (buffer[i] && buffer[i] == '\n')
		i ++;
	return (i);
}

char	*get_left_part(char *buffer, char *line)
{
	size_t	i;
	char	*result;

	free(line);
	if (!buffer || !buffer[0])
		return (NULL);
	i = new_line_position(buffer);
	result = (char *) malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	i = -1;
	while (buffer[++i] && buffer[i] != '\n')
		result[i] = buffer[i];
	if (buffer[i] == '\n')
		result[i++] = '\n';
	result[i] = '\0';
	return (result);
}

char	*get_right_part(char *buffer)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = new_line_position(buffer);
	if (buffer[i] == '\0')
	{
		free(buffer);
		return (NULL);
	}
	result = (char *) malloc (sizeof(char) * (ft_strlen(buffer) - i + 1));
	if (!result)
		return (free_str(&buffer));
	j = 0;
	while (buffer && buffer[i])
	{
		result[j] = buffer[i];
		i ++;
		j ++;
	}
	result[j] = '\0';
	free(buffer);
	return (result);
}

char	*ft_get_next_line(int fd)
{
	int			bytes_read;
	char		*line;
	static char	*buffer = NULL;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	bytes_read = 1;
	line = (char *) malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!line)
		return (free_str(&buffer));
	while (!(ft_strchr(buffer, '\n')) && bytes_read != 0)
	{
		bytes_read = read(fd, line, BUFFER_SIZE);
		if (bytes_read == -1)
			return (read_is_minus_one(&line, &buffer));
		line[bytes_read] = '\0';
		buffer = ft_strjoin(buffer, line);
		if (!buffer)
			return (free_str(&line));
	}
	line = get_left_part(buffer, line);
	if (!line)
		return (free_str(&buffer));
	buffer = get_right_part(buffer);
	return (line);
}
