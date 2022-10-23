/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:55:54 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/23 23:39:35 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int check(va_list list , char c)
{
    if ( c == 'c')
        return (ft_putchar(va_arg(list, int)));
    else if ( c =='s' )
        return (ft_putstr(va_arg(list, char*)));
    else if ( c == 'd' || c == 'i')
        return (ft_putnbr(va_arg(list, int)));
    else if ( c == 'p')
    {
        ft_putstr("0x");
        return (ft_hexa(va_arg(list,long long unsigned int),"0123456789abcdef") + 2);
        
    }
    else if ( c == 'x')
        return ft_hexa(va_arg(list, int),"0123456789abcdef");
    else if ( c == 'X')
        return ft_hexa(va_arg(list, int),"0123456789ABCDEF");
    else if ( c == 'u')
        return ft_putnbru(va_arg(list,long unsigned int));
    return 0;
}
int    ft_printf(const char *str, ...)
{   
    int c ;
    int i;
    
     i = 0;
     c = 0;
    va_list ptr;

    va_start(ptr,str);
    while(str[i])
    {
        if (str[i] == '%')
        {
            i++;
            if(str[i] == '%')
                c += ft_putchar('%');
            c +=check(ptr,str[i]);
        }
        else 
            c += ft_putchar(str[i]);
        i++;
    }
    va_end(ptr);
    return c;
}
// int main()
// {
//     printf("5d");
// }