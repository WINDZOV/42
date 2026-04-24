/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 09:38:04 by nkilosan          #+#    #+#             */
/*   Updated: 2026/01/27 14:51:20 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/* MAIN */
int	ft_printf(const char *format, ...);

/* DISPATCHER */
int	ft_format(va_list args, char specifier);

/* CHAR & STRING */
int	ft_putchar(char c);
int	ft_putstr(char *str);

/* POINTER */
int	ft_putptr(void *ptr);

/* NUMBERS */
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);

/* HEX */
int	ft_puthex(unsigned int n, char format);

/* UTILS */
int	ft_strlen(char *str);

#endif
