/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbritani <sbritani@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:01:36 by sbritani          #+#    #+#             */
/*   Updated: 2022/12/20 23:01:38 by sbritani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **head_a, t_list **head_b)
{
	push_first_from_b_to_a(head_a, head_b);
	write(1, "pa\n", 3);
}

void	pb(t_list **head_a, t_list **head_b)
{
	push_first_from_b_to_a(head_b, head_a);
	write(1, "pb\n", 3);
}
