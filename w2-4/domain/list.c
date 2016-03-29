#include "utils.h"
#include "expense.h"
#include "node.h"

void	interpret_node(int type)
{
	if (type == TYPE_APA)
		printf("apa");
	if (type == TYPE_CANAL)
		printf("canal");
	if (type == TYPE_INCALZIRE)
		printf("incalzire");
	if (type == TYPE_GAZ)
		printf("gaz");
}

Node	*new_node(Expense expense)
{
	Node	*p;

	p = malloc(sizeof(Node) + 1);
	p->data = expense;
	p->next = NULL;
	return (p);
}

void	unshift_node(Node **start, Expense expense)
{
	Node	*p;

	if (*start == NULL)
		*start = new_node(expense);
	else
	{
		p = new_node(expense);
		p->next = *start;
		*start = p;
	}
}

void	push_node(Node **start, Expense expense)
{
	Node	*p;
	Node	*t;

	if (*start == NULL)
		*start = new_node(expense);
	else
	{
		p = new_node(expense);
		t = *start;
		while (t->next != NULL)
			t = t->next;
		t->next = p;
	}
}

void	show_node(Node *start)
{
	Node	*p;

	p = start;
	while (p != NULL)
	{
		printf("%d, %f, ", p->data.ap, p->data.sum);
		interpret_node(p->data.type);
		printf("  ->  ");
		p = p->next;
	}
	printf("\n");
}

void	edit_elem(Node **start, Expense ex)
{
	Node *p;

	p = *start;
	while (p != NULL)
	{
		if (p->data.ap == ex.ap)
		{
			p->data.sum = ex.sum;
			p->data.type = ex.type;
			break;
		}
		p = p->next;
	}
}

int		node_exists(Node *start, Expense ex)
{
	Node *p;

	p = start;
	while (p != NULL)
	{
		if (p->data.ap == ex.ap)
			return (1);
		p = p->next;
	}
	return (0);
}

int		delete_node(Node **start, Expense ex)
{
	Node *p;
	Node *o;

	p = *start;
	if ((*start)->data.ap == ex.ap)
	{
		o = *start;
		*start = (*start)->next;
		free(o);
		return (1);
	}
	else
		while (p->next != NULL)
		{
			if (p->next->data.ap == ex.ap)
			{
				o = p->next;
				p->next = p->next->next;
				free(o);
				return (1);
			}
			p = p->next;
		}
	return (0);
}

void	show_node_filtered_sum(Node *start, int sum1, int sum2)
{
	Node	*p;

	p = start;
	printf("\n");
	while (p != NULL)
	{
		if (p->data.sum >= sum1 && p->data.sum <= sum2)
		{
			printf("%d, %f, ", p->data.ap, p->data.sum);
			interpret_node(p->data.type);
			printf("\n");
		}
		p = p->next;
	}
	printf("\n");
}

void	show_node_filtered_type(Node *start, int type)
{
	Node	*p;

	p = start;
	printf("\n");
	while (p != NULL)
	{
		if (p->data.type == type)
		{
			printf("%d, %f, ", p->data.ap, p->data.sum);
			interpret_node(p->data.type);
			printf("\n");
		}
		p = p->next;
	}
	printf("\n");
}

void	show_node_filtered_ap(Node *start, int ap)
{
	Node	*p;

	p = start;
	printf("\n");
	while (p != NULL)
	{
		if (p->data.ap == ap)
		{
			printf("%d, %f, ", p->data.ap, p->data.sum);
			interpret_node(p->data.type);
			printf("\n");
		}
		p = p->next;
	}
	printf("\n");
}
