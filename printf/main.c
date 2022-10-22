
#include "ft_printf.h"

int main()
{
    int a = 7655;

    /*printf("val : |%010d| \n", a);
    printf("val : |%-10d| \n", a);
    printf("val : |%10d| \n", a);
    printf("val : |%.10d| \n", a);
    printf("val : |%+ d| \n", a);
    printf("--------------- \n");
    printf("val : |%#################x| \n", 5554);
    printf("val : |%#X| \n", a); */

    int w = ft_printf("%c%c%c \n", 'a', 'c', 'b'); //ft_printf("%c", '0');
    printf("hey %d \n", w);


    //printf("val : %d \n", includes('c', "HEcLLO"));

    //printf("%s %c MOHAMED %d %%%%  %x %X %p --> %u \n", "ELMHASSANI", 'L', 23, 95656, 95656, &a, -55);
    //ft_printf("%s %c MOHAMED %%%% %i %x %X %p --> %u \n", "ELMHASSANI", 'L', -23, 95656, 95656, b, -55);
    return (0);
}

/*

struct params {
    int flag;
    int width;
    int prec;
    int zeropad;
    int leftpad;
    int rightpad;
    int hash;
    int length;
    char spec;
};

*/