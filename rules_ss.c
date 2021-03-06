/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:00:42 by jmatute-          #+#    #+#             */
/*   Updated: 2021/12/11 14:25:44 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rule_swap_stack(t_list **stack, char *option)
{
	t_list	*first;
	t_list	*second;

	first = (*stack);
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	(*stack) = second;
	if (ft_strcmp(option, "swap_a") == 0)
		write(1, "sa\n", 3);
	else if (ft_strcmp(option, "swap_b") == 0)
		write(1, "sb\n", 3);
}

void	rules_swap(t_list **stack_a, t_list **stack_b)
{
	rule_swap_stack(stack_a, "NON");
	rule_swap_stack(stack_b, "NON");
	write(1, "ss", 3);
}
