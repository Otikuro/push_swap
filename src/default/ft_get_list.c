/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:42:48 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/29 13:55:49 by juamanri         ###   ########.fr       */
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
			if (!ft_isdigit(nums[i][j]))
				return (0);
			j++;
		}
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
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

int	ft_get_list(char *str)
{
	t_stack	*stack;
	char	**nums;
	int		size;
	int		validity;

	nums = ft_split(str, ' ');
	if (nums == NULL)
		return (0);
	size = ft_check_parsebility(nums);
	if (size < 2)
		return (0);
	stack = ft_create_stack(nums);
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
	validity = ft_check_validity(stack);
	return (1);
/* 	//Comprueba que se hayan creado como minimo dos elelmentos
	if (i < 2)
	{
		write("Error");
		return ();
	}
	//Crea la primera lista con el numero de elementos contados por i, asignando el valor devuelto por atoi como el contenido
	while ()
	{
		ft_lstnew();
	}
	ft_check_validity(); */
}
