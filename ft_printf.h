/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:48:17 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/24 00:27:18 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include <stdarg.h>
# include <unistd.h>

int    ft_putchar(char c);
int    ft_putnbr(long int n);
int    ft_putstr(char *ch);
int    ft_printf(const char *str, ...);
int     ft_putnbru(unsigned int nb);
int     ft_hexa(unsigned long n,  char* b);
int    ft_adress(long long unsigned int n, char *b);
// int    ft_unssigned(unsigned int n);

#endif