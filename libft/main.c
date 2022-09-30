#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(){

	char name[20] = "MOHAMED";
	char name2[20] = "MOHAMED";

	printf("before -> . %s \n", name);

	memset(name, '0', 3);

	printf("after MEMESET -> . %s \n", name);

	ft_memset(name2, '0', 3);

	printf("after MEMESET -> . %s \n", name2);

	return 0;
}