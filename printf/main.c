
#include "ft_printf.h"

int main()
{

    // char str[] = ""
    // printf("Hello %dlf |%0d|  %b \n", 22, 7);

    // put_nbr10(9741);

    // ft_printf("%c LIFE %c %s -- |%d| \n WOOW ", 'G', 'K', "HELLO WORLD", 87454);
    //   printf("%d %p WOOW %d |%c| || %% life hax %bd ");
    int a = 10;
    int *b = &a;

    printf("%s %c MOHAMED %d %%%%  %x %X %p --> %u \n", "ELMHASSANI", 'L', 23, 95656, 95656, b, -55);
    ft_printf("%s %c MOHAMED %%%% %i %x %X %p --> %u \n", "ELMHASSANI", 'L', -23, 95656, 95656, b, -55);

    // printf(" \n **** \n ");
    //put_nbr(396398635875, 36, "0123456789abcdefghijklmnopqrstuvwxyz");

    return (0);
}
