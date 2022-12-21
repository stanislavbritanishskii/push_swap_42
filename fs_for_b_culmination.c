/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs_for_b_culmination.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbritani <sbritani@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:00:31 by sbritani          #+#    #+#             */
/*   Updated: 2022/12/20 23:00:32 by sbritani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f1(t_list *b, t_list **head_a, t_list **head_b)
{
	int	iter;

	iter = b->cur_pos_a;
	while (iter)
	{
		rr(head_a, head_b);
		iter--;
	}
	iter = b->cur_pos_b - b->cur_pos_a;
	while (iter)
	{
		rb(head_b);
		iter--;
	}
	pa(head_a, head_b);
}

void	f2(t_list *b, t_list **head_a, t_list **head_b)
{
	int	iter;

	iter = b->cur_pos_b;
	while (iter)
	{
		rr(head_a, head_b);
		iter--;
	}
	iter = b->cur_pos_a - b->cur_pos_b;
	while (iter)
	{
		ra(head_a);
		iter--;
	}
	pa(head_a, head_b);
}

void	f3(t_list *a, t_list *b, t_list **head_a, t_list **head_b)
{
	int	iter;

	iter = list_len(a) - b->cur_pos_a;
	while (iter)
	{
		rrr(head_a, head_b);
		iter--;
	}
	iter = list_len(*head_b) - b->cur_pos_b
		- list_len(*head_a) + b->cur_pos_a;
	while (iter)
	{
		rrb(head_b);
		iter--;
	}
	pa(head_a, head_b);
}

void	f4(t_list *b, t_list **head_a, t_list **head_b)
{
	int	iter;

	iter = list_len(*head_b) - b->cur_pos_b;
	while (iter)
	{
		rrr(head_a, head_b);
		iter--;
	}
	iter = list_len(*head_a) - b->cur_pos_a
		- list_len(*head_b) + b->cur_pos_b;
	while (iter)
	{
		rra(head_a);
		iter--;
	}
	pa(head_a, head_b);
}

void	f5(t_list *a, t_list *b, t_list **head_a, t_list **head_b)
{
	int	iter;

	iter = b->cur_pos_b;
	while (iter)
	{
		rb(head_b);
		iter--;
	}
	iter = list_len(a) - b->cur_pos_a;
	while (iter)
	{
		rra(head_a);
		iter--;
	}
	pa(head_a, head_b);
}
