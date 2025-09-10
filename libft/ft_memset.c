#include<unistd.h>

void *ft_memset(void *ptr, int n, unsigned int num)
{
	unsigned int	i;
	unsigned char *str = (unsigned char *) ptr;
	i = 0;
	while ( i < num)
	{
		str[i] = (unsigned char)n;
	
	i++;
	}
	return ptr;
}
