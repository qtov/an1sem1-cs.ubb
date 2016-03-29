#ifndef HANDLER_H
# define HANDLER_H

int		add_to_repo(Expense ex);
int		edit_ap(Expense ex);
int		delete_ap(Expense ex);
void	filter_by_sum(int sum1, int sum2);
void	filter_by_type(int type);
void	filter_by_ap(int ap);

#endif
