/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:15:29 by plashkar          #+#    #+#             */
/*   Updated: 2023/04/26 12:08:37 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main (void)
{
		ft_putnbr_fd(5, 2);
	write (1, "\n", 1);
		ft_putnbr_fd(-7, 2);
	write (1, "\n", 1);
		ft_putnbr_fd(0, 2);
	write (1, "\n", 1);
		ft_putnbr_fd(2147483647, 2);
	write (1, "\n", 1);
		ft_putnbr_fd(-2147483648, 2);
	write (1, "\n", 1);
		ft_putnbr_fd(-2147483648LL, 2);
	write (1, "\n", 1);
		ft_putnbr_fd(-21, 2);
	write (1, "\n", 1);
		ft_putnbr_fd(798, 2);
	write (1, "\n", 1);
}
