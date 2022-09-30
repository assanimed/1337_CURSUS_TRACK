#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(){

	char name[20] = "MOHAMED";
	char name2[20] = "MOHAMED";

	printf("before -> . %s \n", name);

	bzero(name, 3);

	printf("after Bzero -> . |%s| \n", name);

	ft_bzero(name2, 3);

	printf("after MEMESET -> . |%s| \n", name2);

	return 0;
}