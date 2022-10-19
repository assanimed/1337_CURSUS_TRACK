#ifndef C41926E1_EA8B_4F45_95ED_E4583026F865
#define C41926E1_EA8B_4F45_95ED_E4583026F865

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int ft_printf(const char *, ...);
int parse_string(const char *format, va_list args);


int put_char(char c);
int put_str(char *s);

int	digit_size(long nb);
void put_nbr(long, long, char *);

#endif /* C41926E1_EA8B_4F45_95ED_E4583026F865 */
