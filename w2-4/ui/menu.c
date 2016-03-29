#include "utils.h"
#include "expense.h"
#include "handler.h"

void	print_status(int msg_num)
{
	if (msg_num == 0)
		printf("Done.\n");
	else if (msg_num == -1)
		printf("Not existent.\n");
	else if (msg_num == -2)
		printf("Invalid input.\n");
	else if (msg_num == -3)
		printf("Input already exists.\n");
}

void	show_menu(void)
{
	printf("1. Add expenses for an ap.\n");
	printf("2. Edit existent expense.\n");
	printf("3. Delete expense.\n");
	printf("4. Show filtered expense list.\n");
	printf("5. Show ordered expense list.\n");
	printf("6. Exit.\n");
}

void	show_menu_filter(void)
{
	printf("1. By sum.\n2. By type.\n3. By ap.\n>4 or <1. Back.\n");
}

void	show_menu_order(void)
{
	printf("1. By sum.\n2. By type.\n>2 or <1. Back.\n");
}

void	show_submenu_order(void)
{
	printf("1. Ascending.\n2. Descending.\n>2 or <1. Back.\n");
}

void	start_program(void)
{
	int				choice;
	Expense			ex;

	choice = 0;
	while (choice != 6)
	{
		show_menu();
		printf("Choice: ");
		scanf("%d", &choice); //need to validate
		ex.ap = 0;
		ex.sum = 0;
		ex.type = 0;
		if (choice >= 1 && choice <= 6)
		{
			if (choice == 1)
			{
				printf("Ap number: ");
				ex.ap = read_number();
				printf("Sum: ");
				ex.sum = read_double();
				printf("Type: ");
				ex.type = read_type();
				//scanf("%s", ex.type);
				print_status(add_to_repo(ex));
			}
			else if (choice == 2)
			{
				printf("Ap to edit: ");
				ex.ap = read_number();
				printf("New sum: ");
				ex.sum = read_double();
				printf("New Type: ");
				ex.type = read_type();
				print_status(edit_ap(ex));
			}
			else if (choice == 3)
			{
				printf("Ap to delete: ");
				ex.ap = read_number();
				print_status(delete_ap(ex));
			}
			else if (choice == 4)
			{
				show_menu_filter();
				printf("Choice: ");
				int	subchoice = read_number();
				if (subchoice == 1)
				{
					printf("Min sum: ");
					int	sum1 = read_double();
					printf("Max sum: ");
					int	sum2 = read_double();
					filter_by_sum(sum1, sum2);
				}
				else if (subchoice == 2)
				{
					printf("Type: ");
					ex.type = read_type();
					filter_by_type(ex.type);
				}
				else if (subchoice == 3)
				{
					printf("Ap: ");
					ex.ap = read_number();
					filter_by_ap(ex.ap);
				}
			}
			else if (choice == 5)
			{
				show_menu_order();
				printf("Choice: ");
				int	subchoice = read_number();
				if (subchoice == 1)
				{
					show_submenu_order();
					int	subsubchoice = read_number();
					//LATER!
				}
				else if (subchoice == 2)
				{
					show_submenu_order();
					int	subsubchoice = read_number();
					//LATER!
				}
			}
		}
	}
}
