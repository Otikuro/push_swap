
void	ft_add_stack_back(t_stack **stack, t_stack *new)
{
	t_stack	*last_node;

	if (new == NULL)
		return ;
	if (*stack == NULL)
		*stack = new;
	else
	{
		last_node = ft_get_last_node(*stack);
		last_node->next = new;
	}
}