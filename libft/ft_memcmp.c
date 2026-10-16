#include "libft.h"

int ft_memcmp(const void *a, const void *b, size_t n)
{
    const unsigned char *x = a;
    const unsigned char *y = b;
    size_t i;
    for (i = 0; i < n; ++i)
        if (x[i] != y[i])
            return (int)x[i] - (int)y[i];
    return 0;
}
