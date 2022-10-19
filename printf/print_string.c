#include "ft_printf.h"


size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}


int put_str(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        put_char(s[i]);
        i++;
    }
    return ((int)ft_strlen(s));
}