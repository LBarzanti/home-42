/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:26:20 by lbarzant          #+#    #+#             */
/*   Updated: 2024/12/20 20:40:49 by lbarzant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*create_line(int fd, char *stat, char *buff)
{
	int	read_len;

	read_len = 1;
	while (read_len > 0)
	{
		read_len = read(fd, buff, BUFFER_SIZE);
		if (read_len == -1)
			return (NULL);
		else if (read_len == 0)
			break ;
		buff[read_len] = '\0';
		if (!stat)
			stat = ft_strdup("");
		stat = ft_strjoin(stat, buff);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	return (stat);
}

char	*save_line(char *line)
{
	char	*d;
	int		i;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0' || line[1] == '\0')
		return (NULL);
	d = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (d[0] == '\0')
	{
		free(d);
		d = NULL;
	}
	line[i + 1] = '\0';
	return (d);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*stat;
	char		*line;

	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || !buff)
	{
		free(buff);
		free(stat);
		stat = NULL;
		buff = NULL;
		return (NULL);
	}
	line = create_line(fd, stat, buff);
	free(buff);
	buff = NULL;
	if (!line)
		return (NULL);
	stat = save_line(line);
	return (line);
}

/* #include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int fd;
	char *line;


	printf("BUFFER_SIZE = %d\n", BUFFER_SIZE);
	// Test with file "test.txt"
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);

	// Test with standard input
	printf("\nEnter text (Ctrl+D to end):\n");
	while ((line = get_next_line(STDIN_FILENO)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	
	return (0);
} */