#include "expense.h"

int		valid_expense(Expense ex)
{
	if (ex.ap <= 0 || ex.type <= 0 || ex.sum <= 0)
		return (0);
	return (1);
}
