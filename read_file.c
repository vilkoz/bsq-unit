/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 13:28:38 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 18:47:42 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

char	*read_file(char *file)
{
	char	*str;
	char	*buf;
	int		fd;
	int		bts;
	int		i;

	bts = 0;
	i = 0;
	str = (char *)malloc(sizeof(char) * BUF_SIZE + 1);
	str[0] = '\0';
	buf = (char *)malloc(sizeof(char) * BUF_SIZE + 1);
	if ((fd = open(file, O_RDONLY)) < 0)
	{
		ft_puterror("Error", 1);
		return (0);
	}
	while ((bts = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[bts] = '\0';
		str = mallocat(str, buf);
		buf = (char *)malloc(sizeof(char) * BUF_SIZE + 1);
	}
	close(fd);
	return (str);
}

char	*ft_import_stdin(void)
{
	char	*str;
	char	*buf;
	int		bts;
	int		i;

	bts = 0;
	i = 0;
	str = (char *)malloc(sizeof(char) * BUF_SIZE + 1);
	str[0] = '\0';
	buf = (char *)malloc(sizeof(char) * BUF_SIZE + 1);
	while ((bts = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[bts] = '\0';
		str = mallocat(str, buf);
		buf = (char *)malloc(sizeof(char) * BUF_SIZE + 1);
	}
	return (str);
}
