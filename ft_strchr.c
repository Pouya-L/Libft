/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:11:35 by plashkar          #+#    #+#             */
/*   Updated: 2023/04/17 18:22:04 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_strchr replicates the behavior of the standard library function strchr
 as it searches for the first occurrence of the character c in the string str
 and returns a pointer to that location in the string.*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (*str && str[i] != c)
	i++;
	if (*str == '\0')
		return (NULL);
	else
		return ((char *)&str[i]);
}

/*#include <stdio.h>

int main (void)
{
	char *res;
	char str[] = "if you gaze into the abyss, the abyss gazes also into you.";
	res = ft_strchr(str, 'g');
	printf ("%s\n", res);
	return(0);
}*/
