/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:15:29 by plashkar          #+#    #+#             */
/*   Updated: 2023/04/20 18:59:55 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[] = "If you want to join the Peoples Front of Judea, ";
	char	s2[] = "you have to really hate the Romans.";
	printf("%s\n", ft_strjoin(s1, s2));
	return(0);
}
