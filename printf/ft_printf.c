/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:45:45 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/11 17:53:28 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 /**
  * /struct with all the flags and types
  * @//initialize the arguments of the function with the string
  * @//initialize the length of the string
  * @//while the string is not empty
  * @//if the string has a % it means that there is a flag or a type  (ex: %d, %s, %c, %p, %x, %X, %u, %i, %o)
  * @//check the flags of the string (ex: 0, -, +, #, ' ')
  * @// check the types of the string (ex: d, s, c, p, x, X, u, i, o)
  * @//add the length of the string to the pointer
  * @//print the character
  * @//add the length of the string
  * @//end the arguments of the function
  * @//return the length of the string
  * 
*/
#libftprintf
#studio.h

int	ft_printf(const char *str, ...)//
{
    t_block	b;

    b.len = 0;
    va_start(b.args, str);
    while (*str)
    {
        if (*str == '%')  
        {  
            str++;
            ft_check_flags(str, &b);
            ft_check_types(str, &b);
            str += b.len;
        }
        else
        {
            ft_putchar(*str);
            b.len++;
        }
        str++;
    }
    va_end(b.args);
    return (b.len);
}