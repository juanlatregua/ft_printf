/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:49:26 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/13 10:14:58 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_print_funcs.c"

int	ft_formats(va_list args,char const   format)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "0123456789abcdef";
	if (format == 'c')
		len = ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
	{
		len += ft_printstr("0x");
		len += ft_print_hex(va_arg(args, unsigned long), hex);
	}
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_print_unsig_nbr(va_arg(args, unsigned int));
	else if (format == 'x')
        len += ft_print_hex(va_arg(args, unsigned int), hex);
    else if (format == 'X')
		len += ft_print_hex(va_arg(args, unsigned long), "0123456789ABCDEF");
	else if (format == '%')
		len += ft_printchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
        {
			len += ft_formats(args, str[i]);
		    i++;
        }
		else
        {
			len += ft_printchar(str[i]);
            i++;
        }
	}
	va_end(args);
	return (len);
}
