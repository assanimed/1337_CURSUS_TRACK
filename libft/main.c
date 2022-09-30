#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(){

	char s1[] = "MOHAMED";
	char s2[20];

	ft_memcpy(s2, s1, 4 * sizeof(char));

	printf("src : |%s| \n ", s1);
	printf("dest : |%s| \n ", s2);

	return 0;
}