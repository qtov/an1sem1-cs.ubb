#ifndef LIST_H
# define LIST_H

Node	*new_node(Expense expense);
void	unshift_node(Node **start, Expense expense);
void	push_node(Node **start, Expense expense);
void	show_node(Node *start);
void	edit_elem(Node **start, Expense ex);
int		node_exists(Node *start, Expense ex);
int		delete_node(Node **start, Expense ex);
void	show_node_filtered_sum(Node *start, int sum1, int sum2);
void	show_node_filtered_type(Node *start, int type);
void	show_node_filtered_ap(Node *start, int ap);

#endif
