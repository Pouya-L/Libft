/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:15:29 by plashkar          #+#    #+#             */
/*   Updated: 2023/04/18 21:31:56 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main (void)
{
	char *res;
	char *res2;
	char str[] = "if you gaze into the abyss, the abyss gazes also into you.";
	res = ft_strrchr(str, '\0');
	res2 = strrchr(str, '\0');
	printf ("My ft: %s\n", res);
	printf ("OG ft: %s\n", res2);
	return(0);
}
