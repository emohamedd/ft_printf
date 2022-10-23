/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:34:30 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/23 23:52:38 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:38:54 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/03 16:06:30 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putnbr(long int nb)
{
    int c ;
	char s;

    c = 0;
	if (nb < 0)
	{
		c += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		c += ft_putnbr(nb / 10);
		c += ft_putnbr(nb % 10);
	}
	s = nb + '0';
	if (nb >= 0 && nb <= 9)
		c += ft_putchar(s);
    return (c);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%u",-10);
// }