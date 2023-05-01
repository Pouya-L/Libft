/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:15:29 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/01 13:31:57 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*temp;
	t_list	*second_node;

	head = ft_lstnew("Node 2");
	ft_lstadd_front(&head, ft_lstnew("Node 3"));
	ft_lstadd_back(&head, ft_lstnew("Node 1"));
	ft_lstadd_front(&head, ft_lstnew("Node 4"));
	printf("List of content: \n");
	temp = head;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	return (0);
}
