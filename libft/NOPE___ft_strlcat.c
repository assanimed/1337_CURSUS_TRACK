#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t idx;
	size_t j;

	idx = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);

	if(dstlen < dstsize)
		return dstlen + srclen;
	
	while(idx < dstlen)
		idx++;
	j = 0;
	while(idx < dstsize && src[j])
	{
		dst[idx++] = src[j++];
	}
	dst[idx] = '\0';
	return srclen + dstsize;
}