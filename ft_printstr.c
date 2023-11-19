/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:22:07 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/19 18:48:18 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char	*str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (str[len] != '\0')
	{
		ft_printchar(str[len]);
		len++;
	}
	return (len);
}
