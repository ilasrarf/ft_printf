/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:51:41 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/11/12 18:58:09 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-', len);
		ft_putchar('2', len);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		ft_putchar('-', len);
		nbr = nbr * -1;
	}
	if (nbr < 10)
		return (ft_putchar(nbr + '0', len));
	ft_putnbr(nbr / 10, len);
	ft_putnbr(nbr % 10, len);
}
