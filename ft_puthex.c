/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:27:45 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/11/12 18:57:54 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, int i, int *len)
{
	unsigned int	nb;
	char			*base;

	nb = nbr;
	if (i == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}
	if (nb < 16)
	{
		ft_putchar(base[nb], len);
	}
	if (nb >= 16)
	{
		ft_puthex(nb / 16, i, len);
		ft_puthex(nb % 16, i, len);
	}
}
