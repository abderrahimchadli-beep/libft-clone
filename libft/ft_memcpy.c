#include<unistd.h>
#include<stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *dptr;
	const unsigned char *sptr;
	
	i = 0;
	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	while (i < n)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dest);
}
