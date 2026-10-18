#include "libft.h"
#include <stdint.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    size_t i;

    if (n == 0 || dest == src)
        return dest;
    if ((uintptr_t)d < (uintptr_t)s)
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            ++i;
        }
    }
    else
    {
        while (n > 0)
        {
            --n;
            d[n] = s[n];
        }
    }
    return dest;
}
