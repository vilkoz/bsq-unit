/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 13:30:28 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 20:01:02 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

void	ft_puterror(char *str, int error)
{
	ft_putstr(str);
	if (error == 1)
		ft_putstr(": file can not be opened\n");
	if (error == 2)
		ft_putstr(": map error\n");
	if (error == 3)
		ft_putstr(": can't allocate memmory\n");
	if (error == 4)
		ft_putstr(": can't find square\n");
}
