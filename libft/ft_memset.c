#include <stddef.h>

void *ft_memset(void *ptr, int n, size_t num)
{
	size_t	i;
	unsigned char *str = (unsigned char *) ptr;
	i = 0;
	while ( i < num)
	{
		str[i] = (unsigned char)n;
	
	i++;
	}
	return ptr;
}
