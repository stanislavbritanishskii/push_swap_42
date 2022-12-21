/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbritani <sbritani@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:01:41 by sbritani          #+#    #+#             */
/*   Updated: 2022/12/20 23:01:42 by sbritani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **head)
{
	swap_first_two(head);
	write(1, "sa\n", 3);
}

void	sb(t_list **head)
{
	swap_first_two(head);
	write(1, "sb\n", 3);
}

void	ss(t_list **head_a, t_list **head_b)
{
	swap_first_two(head_b);
	swap_first_two(head_a);
	write(1, "ss\n", 3);
}
