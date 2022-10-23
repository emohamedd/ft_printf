/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:01:44 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/23 23:41:37 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int ft_hexa(unsigned int n,  char* b)
{
    int count;
    count = 0;
    if (count >= 16)
    {   
        count += ft_hexa(n/16, b);
        count += ft_hexa(n % 16, b);
    }
    else
        count += ft_putchar(b[n]);
    return (count);
}
