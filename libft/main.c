#include "libft.h"
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	main(void)
{
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

	/* char *back = ft_strtrim(" \n\t  \n\t  ", "\t \n");
	printf("%s", back); */

	int fd = open("hey.txt", O_WRONLY | O_CREAT | O_EXCL,S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	//printf("file: %d \n", fd);

	write(fd, "HEY", 3);

	return (0);
}