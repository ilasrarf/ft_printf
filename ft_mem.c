/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:16:34 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/11/12 18:55:42 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex(unsigned long long p, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (p < 16)
		ft_putchar(base[p], len);
	else
	{
		hex(p / 16, len);
		hex(p % 16, len);
	}
}

void	ft_mem(unsigned long long p, int *len)
{
	ft_putstr("0x", len);
	hex(p, len);
}
