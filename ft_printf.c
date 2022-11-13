/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:11:31 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/11/12 20:09:20 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_format(char signe, va_list args, int *len)
{
	if (signe == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (signe == 'i' || signe == 'd')
		ft_putnbr(va_arg(args, int), len);
	else if (signe == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (signe == 'x')
		ft_puthex(va_arg(args, unsigned int), 0, len);
	else if (signe == 'X')
		ft_puthex(va_arg(args, unsigned int), 1, len);
	else if (signe == '%')
		ft_putchar('%', len);
	else if (signe == 'u')
		ft_un(va_arg(args, unsigned int), len);
	else if (signe == 'p')
		ft_mem(va_arg(args, unsigned long long), len);
	else
		ft_putchar(signe, len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (write(1, "", 0) == -1)
		return (-1);
	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
			break ;
		else if (format[i] == '%')
		{
			i++;
			ft_check_format(format[i], args, &len);
		}
		else
			ft_putchar(format[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}

#include <stdio.h>
int main()
{
	printf("\n%d", ft_printf("%d", 45));
}
