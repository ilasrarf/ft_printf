/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:09:41 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/11/12 18:56:55 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *for_out, ...);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putstr(char *str, int *len);
void	ft_puthex(unsigned int nbr, int i, int *len);
void	ft_un(unsigned int i, int *len);
void	ft_mem(unsigned long long p, int *len);

#endif