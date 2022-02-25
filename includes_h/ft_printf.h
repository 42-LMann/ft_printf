/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:41:03 by lmann             #+#    #+#             */
/*   Updated: 2022/01/24 15:42:55 by lmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_printf
{
	va_list		args;
	int			t_len;
}		t_printf;

int			ft_printf(const char *format, ...);
void		ft_eval_conversion(t_printf *tab, char character);
char		*ft_nbrlen(unsigned long nbr, int *len);
void		ft_hex(t_printf *tab, char character);
void		ft_unint(t_printf *tab, char character);
void		ft_charstr(t_printf *tab, char character);
void		ft_put_unsign_nbr_fd(unsigned int nbr, int fd);
void		ft_nbrcount(t_printf *tab, long n);

#endif
