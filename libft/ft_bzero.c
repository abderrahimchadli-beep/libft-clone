#include<unistd.h>

void	ft_bzero(void *ptr, unsigned int n)
{
	unsigned char *str= (unsigned char *) ptr;
	unsigned int i = 0;
	while(i < n)
	{
		str[i]='\0';
		i++;
	}
}
