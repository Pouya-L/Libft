/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:15:29 by plashkar          #+#    #+#             */
/*   Updated: 2023/04/27 17:26:29 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *head;
	t_list *temp;
	t_list *second_node;

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

	/*second_node = head->next;
	ft_lstdelone(second_node, &del);

	t_list *current_node = head;
	while (current_node != NULL)
	{
		printf("%s\n", (char *)current_node->content);
		current_node = current_node->next;
	}
//	ft_lstclear(&head, &del);*/
	return (0);
}
