#include "utils.h"
#include "expense.h"

typedef struct s_node
{
	Expense			data;
	struct s_node	*next;
} Node;
