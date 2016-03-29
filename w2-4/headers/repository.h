#ifndef REPOSITORY_H
# define REPOSITORY_H

int		repo_add(Expense ex);
int		repo_edit(Expense ex);
int		repo_delete(Expense ex);
void	repo_filter_by_sum(int sum1, int sum2);
void	repo_filter_by_type(int type);
void	repo_filter_by_ap(int ap);

#endif
