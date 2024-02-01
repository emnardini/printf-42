/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorales <emorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:57:35 by emorales          #+#    #+#             */
/*   Updated: 2024/02/01 18:55:53 by emorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    param_processor(char *str)
{
    if (*str == 'c')
	{}
	else if (*str == 's')
	{}
	else if (*str == 'p')
	{}
	else if (*str == 'i')
	{}
    else if (*str == 'd')
	{}
	else if (*str == 'u')
	{}
	else if (*str == 'x')
	{}
    else if (*str == 'X')
	{}
	else if (*str == '%')
	{}
}

int ft_printf(char const *str, ...)
{
    int charstoprint;
    int i;
    int lenght;
    
    va_list args;

    if (!str)
        return (-1);
    charstoprint = 0;
    va_start(args, str);
    i = 0;
    
    while (str[i]++)
    {
        if (*str == '%')
        {
            str++;
        }
    }

    //1. criar structs para segurar os params da print e inicializar struct
    //2. percorrer params recebidos e guardar chars no buffer até o %
    //3. ao encontrar % parsear formato
        // 3a) parsear flags, parsear width, parsear precisão
    //4. renderizar impressão

    return (charstoprint);
}