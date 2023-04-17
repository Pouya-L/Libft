/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NOTWORKINGft_strlcat.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:13:05 by plashkar          #+#    #+#             */
/*   Updated: 2023/04/15 20:26:02 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t srclen;
	size_t destlen;
	size_t i;

	srclen = ft_strlen(src);
	destlen = 0;
	i = 0;

	while (*dst && destlen < size)
	{
		++dst;
		++destlen;
	}
	if (destlen == size)
	returrn (size + srclen);
	while (*src && i < (size -destlen -1))
	{
		dst[destlen] = src[i]
		i++;
		destlen++;
	}





















	/*size_t sizeofconc;
	sizeofconc = 0;
	while (*dst && sizeofconc < size)
	{
		++dst;
		sizeofconc++;
	}
	while (*src && sizeofconc + 1 < size)
	{
		*dst = *src;
		++dst;
		++src;
		sizeofconc++;
	}
	if (sizeofconc < size)
	*dst = '\0';
	while (*src)
	{
		++src;
		++sizeofconc;
	}
	return(sizeofconc);*/
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Heroiam slava!";
	char dest[60] = "Slava Ukraini! ";
	printf("The original dest is: %s\n", dest);
	size_t sizeofall = ft_strlcat(dest, src, 10);
	printf ("The result is: %s\n", dest);
	printf ("the total length of the string that would be created if there was unlimted space is: %ld\n", sizeofall);
	return (0);
}*/
