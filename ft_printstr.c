/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:22:07 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/17 20:13:12 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char	*str)
{
	int	len;

	len = 0;
	if (!str)
		return (ft_printstr("(null)"));
	while (str[len] != '\0')
	{
		ft_printchar(str[len]);
		len++;
	}
	return (len);
}
