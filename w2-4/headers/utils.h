#ifndef UTILS_H
# define UTILS_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "type_defs.h"

char			*ft_strdup(const char *str);
size_t			ft_strlen(char str[15]);
int				read_number();
double			read_double();
int				read_type();

#endif
