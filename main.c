/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:15:29 by plashkar          #+#    #+#             */
/*   Updated: 2023/04/19 18:07:39 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char	big[] = "We apologize again for the fault in the subtitles. Those responsible for sacking the people who have just been sacked have been sacked.";
	char	little[] = "Those responsible for sacking the people";
//	printf("OG ft: %s\n", strnstr(big, little, 10));
	printf("my ft: %s\n", ft_strnstr(big, little, 100));
	return(0);
}
