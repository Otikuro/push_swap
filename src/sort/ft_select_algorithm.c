/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_algorithm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:21:10 by juamanri          #+#    #+#             */
/*   Updated: 2025/06/05 12:30:30 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

#include <stdio.h>

void	ft_select_algorithm(t_stack **stack, int size, int validity)
{
	if (validity == 2)
		ft_inverse_sort(stack, size);
	// else if (size == 3)
	// 	ft_sort_three_elements(stack);
	// else if (size == 4)
	// 	ft_sort_four_elements(stack);
	// else if (size == 5)
	// 	ft_sort_five_elements(stack);
	// else
	// 	algoritmo principal
}
