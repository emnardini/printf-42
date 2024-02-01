/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorales <emorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:52 by emorales          #+#    #+#             */
/*   Updated: 2024/02/01 18:49:06 by emorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

typedef struct s_format
{
    //format specifiers
    // %c - characters
    // %s - string
    // %p - ponteiro para endereço (no caso de variável x, o input é (void *)&x)
    // %d - decimal base 10
    // %i - inteiro base 10
    // %u - unsigned decimal
    // %x - hexadecimal minúsculo
    // %X - hexadecimal minúsculo
    // %% - imprime um sinal de porcentagem
    char    specifier;
    //flags
    bool    leftjustified; // -
    bool    leftpadzeroes; // 0
    bool    plus;          // +
    bool    space;         // 
    bool    hash;          // #
    //width & precision
    int     width;
    int     precision;
};

int ft_printf(char const *str, ...);

#endif