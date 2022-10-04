
#include "libft.h"


char *ft_strdup(const char *s)
{
	char *outSTR;
	size_t length;

	length = ft_strlen(s) + 1;

	outSTR = malloc(sizeof(char) * length);

	if(outSTR == NULL)
		return (NULL);
	
	(void) ft_strlcpy(outSTR, s, length);

	return (outSTR);
}