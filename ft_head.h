/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 13:22:21 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 20:12:51 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_HEAD_H
# define __FT_HEAD_H

# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define BUF_SIZE 32

char	*read_file(char *file);

void	bsq_solve(char *str);

void	ft_puterror(char *str, int error);

void	ft_putstr(char *str);

char	*ft_import_stdin(void);

int		ft_strlen(char *str);

char	*mallocat(char *str, char *new);

int		ft_atoi(char *str);

int		ft_strlen_slesh(char *str);

char	**ft_split_nl(char *str, int x, int y);

int		x(char *str);

int		validation(char *str);

int		place_square(char **tmp, int i, int j, int size);

char	**fill_square(int j, int i, char **tmp, int size);

char	**ft_find_square(char **tmp, int x, int y);

void	display_arr(char **tmp, int y);

#endif
