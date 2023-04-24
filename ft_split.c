/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:34:00 by plashkar          #+#    #+#             */
/*   Updated: 2023/04/24 20:16:43 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int wordcnt(const char *s, char delimit)
{
	int	wrdcnt;
	int	i;

	i = 0;
	wrdcnt = 0;

	while (s[i] != '\0')
	{
		if (s[i] != delimit && (s[i + 1] == delimit || s[i + 1] == '\0'))
			wrdcnt++;
		i++;
	}
	return(wrdcnt);
}

int lettercnt(const char *s, char delimit, int i)
{
	while (s[i] != delimit && s[i] != '\0')
	{
		if (s[i] != delimit && (s[i + 1] == delimit || s[i + 1] == '\0'))
			break;
		i++;
	}
	return (i + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		a;
	int		start;

	a = 0;
	start = 0;
	result = malloc(sizeof(char *) * (wordcnt(s, c) + 1));
		if (result)
			return (NULL);
	while (s[start] != '\0' && s[start] != c)
	{
		result[a] = ft_substr(s, start, lettercnt(s, c, start));
		start = start + lettercnt(s, c, start);
		a++;
	}
	result[a] = 0;
	return (result);
}

int main (void)
{
	int i = 0;
	char str1[] = "Abc,sdt,sffg,,,h,";
	char str2[] = "almocar,imhungry,abc";
	char **arrstr = ft_split(str1, ',');
	while (*arrstr[i] != '\0')
	{
		printf("%s\n", arrstr[i]);
		i++;
	}
	return (0);
}
