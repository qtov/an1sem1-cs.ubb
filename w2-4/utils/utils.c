#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "type_defs.h"

char	*ft_strdup(const char *str)
{
	int		i = 0;
	char	*new_str;

	while (str[i])
		++i;
	new_str = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		++i;
	}
	new_str[i] = '\0';
	return (new_str);
}

size_t	ft_strlen(char str[15])
{
	size_t	i = 0;

	while (str[i])
		++i;
	return (i);
}

int		read_number(void)
{
	int		ok;
	char	str[100];
	int		nr = 0;

	scanf("%s", str);
	ok = sscanf(str, "%d", &nr);
	if (ok != 0)
		return (nr);
	else
		return (-1);
}

double	read_double(void)
{
	int		ok;
	char	str[100];
	double	nr;

	scanf("%s", str);
	ok = sscanf(str, "%lf", &nr);
	if (ok != 0)
		return (nr);
	else
		return (-1);
}

int		read_type(void)
{
	char	str[15];

	scanf("%s", str);
	if (strcmp(str, "apa") == 0)
		return (TYPE_APA);
	else if (strcmp(str, "canal") == 0)
		return (TYPE_CANAL);
	else if (strcmp(str, "incalzire") == 0)
		return (TYPE_INCALZIRE);
	else if (strcmp(str, "gaz") == 0)
		return (TYPE_GAZ);
	else
		return (-1);
}
