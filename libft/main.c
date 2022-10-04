#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdint.h>
#include "libft.h"

int main(){

	/* char a[5] = "HELLO";

	memcpy(a+2, a, 3);

	printf("Value: %s \n", a); */


	/* int s[5] = {1,2,3,4,5};
	int d[5]; */

	// printf("Value : |%c| \n", ft_tolower('a'));

  
  /* char *a = strchr("CSABLANC", 'A'); // ABLANC
  char *b = ft_strrchr("CSABLANC", 'A'); // ANC
  
  printf("value a: %s \n", a);
  printf("value b: %s \n", b); */

  	char *back = ft_strtrim("  ABC  ", "x ");
	printf("out : |%s| \n", back);



	return 0;
}