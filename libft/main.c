#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(){

	int src[10] = {1,2,3,4,5,6,7,8,9,10};
	int dest[10] = {55,2};

	ft_memmove(dest, src, 5 * sizeof(int));

	for(int i = 0; i < 10; i++)
		printf("dest[%d] : %d \n", i, dest[i]);

	printf("\n ************* \n");

	for(int i = 0; i < 10; i++)
		printf("src[%d] : %d \n", i, src[i]);

	return 0;
}