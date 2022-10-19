#include "ft_printf.h"

int parse_string(const char *format, va_list args)
{
	int len;
	long nb;

	len = 0;
    int i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (
                format[i] == 'd' || format[i] == 'i' || format[i] == 'p' || format[i] == 'X' || format[i] == 'x')
            {
                if (format[i] == 'd' || format[i] == 'i')
                {
					nb = va_arg(args, int);
					len += digit_size(nb);
					put_nbr(nb, 10, "0123456789");
				}
                if (format[i] == 'x' || format[i] == 'p')
                {

                    if (format[i] == 'p')
                        put_str("0x");
					nb = va_arg(args, long);
					len += digit_size(nb);
                    put_nbr(nb, 16, "0123456789abcdef");
                }
                if (format[i] == 'X')
				{
					nb = va_arg(args, long);
					len += digit_size(nb);
                    put_nbr(nb, 16, "0123456789ABCDEF");
				}
                i++;
            }
            if (format[i] == 's')
            {
                char *str = va_arg(args, char *);
                len += put_str(str);
                i++;
            }
            if (format[i] == 'c')
            {
                len += put_char(va_arg(args, int));
                i++;
            }

			if(format[i] == 'u')
			{
				nb = va_arg(args, unsigned int);
				len += digit_size(nb);
				put_nbr(nb, 10, "0123456789");
				i++;
			}
        }
        len += put_char(format[i]);
        i++;
    }
    return (len);
}


int ft_printf(const char *format, ...)
{

    int len = 0;

    va_list args;

    va_start(args, format);

    len = parse_string(format, args);

    va_end(args);

    return (len);
}