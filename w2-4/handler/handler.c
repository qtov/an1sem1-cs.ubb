#include "expense.h"
#include "repository.h"
#include "utils.h"
#include <string.h>
#include "validator.h"
#include "code_errors.h"

int		add_to_repo(Expense ex)
{
	if (!valid_expense(ex))
		return (INVALID_DATA);
	if (repo_add(ex))
		return (1);
	else
		return (EXISTS);
}

int		edit_ap(Expense ex)
{
	if (!valid_expense(ex))
		return (INVALID_DATA);
	if (repo_edit(ex))
		return (1);
	else
		return (NOT_EXISTS);
}

int		delete_ap(Expense ex)
{
	if (repo_delete(ex))
		return (1);
	else
		return (NOT_EXISTS);
}

void	filter_by_sum(int sum1, int sum2)
{
	repo_filter_by_sum(sum1, sum2);
}

void	filter_by_type(int type)
{
	repo_filter_by_type(type);
}

void	filter_by_ap(int ap)
{
	repo_filter_by_ap(ap);
}
