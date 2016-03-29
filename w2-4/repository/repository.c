#include "node.h"
#include "list.h"

Node	*start = NULL;

int		repo_add(Expense ex)
{
	if (!node_exists(start, ex))
	{
		push_node(&start, ex);
		show_node(start);
		return (1);
	}
	return (0);
}

int		repo_edit(Expense ex)
{
	if (node_exists(start, ex))
	{
		edit_elem(&start, ex);
		show_node(start);
		return (1);
	}
	return (0);
}

int		repo_delete(Expense ex)
{
	if (node_exists(start, ex))
	{
		delete_node(&start, ex);
		show_node(start);
		return (1);
	}
	return (0);
}

void	repo_filter_by_sum(int sum1, int sum2)
{
	show_node_filtered_sum(start, sum1, sum2);
}

void	repo_filter_by_type(int type)
{
	show_node_filtered_type(start, type);
}

void	repo_filter_by_ap(int ap)
{
	show_node_filtered_ap(start, ap);
}
