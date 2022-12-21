/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_fuctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbritani <sbritani@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:01:11 by sbritani          #+#    #+#             */
/*   Updated: 2022/12/20 23:01:13 by sbritani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_last(t_list *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

void	add_back(t_list *head, t_list *to_add)
{
	t_list	*last;

	if (!head)
	{
		head = to_add;
		return ;
	}	
	last = get_last(head);
	last->next = to_add;
}

void	add_front(t_list **head, t_list *to_add)
{
	to_add->next = *head;
	*head = to_add;
}

t_list	*new_list(int value)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	res->value = value;
	res->next = NULL;
	return (res);
}

void	swap_first_two(t_list **head)
{
	t_list	*temp;
	t_list	*other_temp;

	other_temp = *head;
	temp = other_temp->next;
	if (!temp)
		return ;
	other_temp->next = other_temp->next->next;
	temp->next = other_temp;
	*head = temp;
}
