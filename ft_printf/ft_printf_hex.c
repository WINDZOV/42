/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 09:43:45 by nkilosan          #+#    #+#             */
/*   Updated: 2026/01/27 10:50:46 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_base(unsigned long long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_base(n / 16, base);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_puthex(unsigned int n, char format)
{
	if (format == 'x')
		return (ft_putnbr_base(n, "0123456789abcdef"));
	else
		return (ft_putnbr_base(n, "0123456789ABCDEF"));
}

int	ft_putptr(void *ptr)
{
	int					count;
	unsigned long long	address;

	if (!ptr)
		return (write(1, "(nil)", 5));
	address = (unsigned long long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += ft_putnbr_base(address, "0123456789abcdef");
	return (count);
}
