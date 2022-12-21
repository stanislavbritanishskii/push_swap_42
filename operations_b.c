/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbritani <sbritani@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:01:30 by sbritani          #+#    #+#             */
/*   Updated: 2022/12/20 23:01:32 by sbritani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **head)
{
	rotate(head);
	write(1, "rb\n", 3);
}

void	rrb(t_list **head)
{
	rotate_reverse(head);
	write(1, "rrb\n", 4);
}
