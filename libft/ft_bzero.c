#include <stddef.h>

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char *str= (unsigned char *) ptr;
	size_t i = 0;
	while(i < n)
	{
		str[i]='\0';
		i++;
	}
}
