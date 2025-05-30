/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:42:48 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/30 15:59:29 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>

void	ft_free_nums(char **nums)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		free(nums[i]);
		i++;
	}
	free(nums);
}

//Check that the arguments contains only digits and/or a "+"" or "-"" at the start of the string
int	ft_check_parsebility(char **nums)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nums[i])
	{
		j = 0;
		while (nums[i][j])
		{
			if (!ft_isdigit(nums[i][j]) &&
				!(j == 0 && (nums[i][j] == '-' || nums[i][j] == '+')))
				return (0);
			j++;
		}
		if (!j)
			return (0);
		i++;
	}
	return (i);
}

t_stack	*ft_create_stack(char **nums)
{
	t_stack	*first_node;
	t_stack	*new_node;
	int		i;
	int		value;

	first_node = NULL;
	i = 0;
	while (nums[i])
	{
		value = ft_atoi(nums[i]);
		new_node = ft_new_stack(value);
		if (new_node == NULL)
		{
			//LLamar a un del
			break ;
		}
		ft_add_stack_back(&first_node, new_node);
		i++;
	}
	return (first_node);
}

int	ft_check_validity(t_stack *stack)
{
	t_stack	*actual_node;
	int		order;
	int		reverse_order;

	while (stack)
	{
		actual_node = stack->next;
		while (actual_node)
		{
			if (stack->value == actual_node->value)
				return (0);
			actual_node = actual_node->next;
		}
		stack = stack->next;
	}
	return (1);
}

int	ft_get_list(int argc, char *argv[])
{
	t_stack	*stack;
	char	**nums;
	int		size;
	int		validity;

	if (argc == 2)
		nums = ft_split(argv[1], ' ');
	else
		nums = argv + 1;
	if (nums == NULL)
		return (0);
	size = ft_check_parsebility(nums);
	if (size < 2)
		return (0);
	stack = ft_create_stack(nums);
	validity = ft_check_validity(stack);
	if (!validity)
		return (0);
	//Llamar funciones que ordenen la lista
	if (size < 6)
		ft_selection_sort();
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
	return (1);
}
