/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:35:51 by plashkar          #+#    #+#             */
/*   Updated: 2023/04/14 18:29:59 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <='9'))
    return (1);
    else
    return (0);
}

/*#include <stdio.h>
int main (void)
{
    char input;

    printf ("Enter your charcater: ");
    scanf("%c", &input);
    if (ft_isalnum(input) == 1)
    printf ("Yeah\n");
    else
    printf("Nah\n");

    return(0);
}*/
