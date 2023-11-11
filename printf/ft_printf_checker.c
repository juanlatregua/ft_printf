/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:45:11 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/11 17:53:39 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 * @//initialize the arguments of the function with the string
 * @//initialize the length of the string
 * @//while the string is not empty
 * @//if the string has a % it means that there is a flag or a type  (ex: %d, %s, %c, %p, %x, %X, %u, %i, %o)
 * @//check the flags of the string (ex: 0, -, +, #, ' ')
 * @// check the types of the string (ex: d, s, c, p, x, X, u, i, o)
 * @//add the length of the string to the pointer
 * @//print the character
 * @b->flag add the flag to the struct b 
*/
#libftprintf

static void
flag_len(const char *str, t_block *b)









void	ft_check_flags(const char *str, t_block *b)
{
    while (ft_strchr("-0+ #", *str))
    {
        if (*str == '-')
            b->flag = '-';
        if (*str == '0')
            b->flag = '0';
        if (*str == '+')
            b->flag = '+';
        if (*str == ' ')
            b->flag = ' ';
        if (*str == '#')
            b->flag = '#';
        str++;
    }
}
void	ft_check_types(const char *str, t_block *b)
