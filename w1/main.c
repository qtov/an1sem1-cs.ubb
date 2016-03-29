#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


void show_menu(void){
	printf("1. Calculeaza numar.\n2. Iesire.\n");
}

int	main(void)
{
	int		n;
	double	nr;
	double	x;
	int		p;
	double	o;
	char	entered;

	meow:
	show_menu();
	scanf("%d", &n);
	if (n == 1)
	{
		printf("Introduceti numarul: ");
		scanf("%lf", &nr);
		printf("Introduceti precizia: ");
		scanf("%d", &p);
		x = floor(sqrt(floor(nr)));
		o = 0.1;
		printf("Rezultat: %d.", (int)x);
		for (int i = 0; i < p; i++)
		{
			entered = 0;
			for (int j = 0; j < 10; j++)
			{
				if ((x + j * o) * (x + j * o) > nr)
				{
					x = x + (j - 1) * o;
					o /= 10;
					printf("%d", j - 1);
					entered = 1;
					break;
				}
				if (entered == 0 && j == 9)
				{
					x = x + 9 * o;
					o /= 10;
					printf("9");
				}
			}
		}
		printf("\n");
	}
	else if (n == 2)
	{
		return (0);
	}
	else
	{
		goto meow;
	}
	return (0);
}
