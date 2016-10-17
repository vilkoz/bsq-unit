/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 13:25:04 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 20:08:35 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int		main(int argc, char **argv)
{
	int		i;
	char	*str;
	char	**arr;

	i = 0;
	if (argc < 2)
	{
		str = ft_import_stdin();
		if (validation(str) == 0)
		{
			ft_puterror(argv[0], 2);
			return (0);
		}
		arr = ft_split_nl(str, ft_strlen_slesh(str), ft_atoi(str));
		if ((arr == (ft_find_square(arr, ft_strlen_slesh(str),
							ft_atoi(str)))) == 0)
			ft_puterror(argv[0], 4);
		display_arr(arr, ft_atoi(str));
	}
	else
		while (++i < argc)
		{
			if((str = read_file(argv[i])) == 0)
				continue ;
			if (validation(str) == 0)
			{
				ft_puterror(argv[i], 2);
				continue ;
			}
			arr = ft_split_nl(str, ft_strlen_slesh(str), ft_atoi(str));
			if ((arr == (ft_find_square(arr, ft_strlen_slesh(str),
								ft_atoi(str)))) == 0)
				ft_puterror(argv[0], 4);
			display_arr(arr, ft_atoi(str));
		}
	return (0);
}
