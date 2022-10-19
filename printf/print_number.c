#include "ft_printf.h"

void put_nbr(long nb, long base, char *range)
{

    if (nb < 0)
    {
        put_char('-');
        nb = -nb;
    }
    if (nb <= (base - 1) && nb >= 0)
    {
        put_char(range[nb]);
    }
    else
    {
        put_nbr(nb / base, base, range);
        put_nbr(nb % base, base, range);
    }
}