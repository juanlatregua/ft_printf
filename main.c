/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:00:08 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/29 18:37:44 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    int i;

    // i = ft_printf("\001\002\007\v\010\f\r\n");
    // printf("Mi función ha devuelto %d caracteres\n", i);
    // i = printf("\001\002\007\v\010\f\r\n");
    // printf("Printf ha devuelto %d caracteres\n", i);
    i = ft_printf("%c\n", '0');
    printf("Mi función ha devuelto %d caracteres\n", i);
    i = printf("%c\n", '0');
    printf("Printf ha devuelto %d caracteres\n", i);
    return (1);
}