#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;
    size_t i;
    for (i = 0; i < n; ++i)
        if (p[i] == (unsigned char)c)
            return (void *)(p + i);
    return NULL;
}
