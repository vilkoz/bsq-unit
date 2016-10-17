/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 17:49:11 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 18:03:27 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int		g_count;
int		g_lengh;
int		g_i;
int		g_n;

int		valid_char(char *str)
{
	int		i;

	i = x(str);
	while (str[i] != '\0')
	{
		if ((str[i] != '\n') && (str[i] != 'o') && (str[i] != '.'))
			return (0);
		i++;
	}
	return (1);
}

int		valid(char *str)
{
	if ((g_i = x(str)) == 0)
		return (0);
	if ((g_n = ft_atoi(str)) == 0)
		return (0);
	if ((g_lengh = ft_strlen_slesh(str)) == 0)
		return (0);
	while (str[g_i] != '\0')
	{
		g_count = 0;
		while (str[g_i] != '\n' && str[g_i] != '\0')
		{
			g_count++;
			g_i++;
			if (g_n == 0)
				return (1);
		}
		if (g_count != g_lengh)
			return (0);
		g_i++;
		g_n--;
		g_count = 0;
	}
	return (1);
}

int		validation(char *str)
{
	if (valid(str) && valid_char(str))
		return (1);
	else
		return (0);
}
