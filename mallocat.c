/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 13:21:34 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 13:32:06 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

char	*mallocat(char *str, char *new)
{
	char	*tmp;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if ((tmp = (char*)malloc(sizeof(char) *
					(ft_strlen(str) + ft_strlen(new)) + 1)) == NULL)
	{
		ft_puterror("tmp = NULL", 3);
		return (0);
	}
	while (str[++i] != '\0')
		tmp[i] = str[i];
	while (new[++j] != '\0')
		tmp[i + j] = new[j];
	tmp[i + j] = '\0';
	free(str);
	free(new);
	return (tmp);
}
