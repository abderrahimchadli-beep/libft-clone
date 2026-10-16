#include "libft.h"

int ft_strcmp(const char *a, const char *b)
{
    const unsigned char *x = (const unsigned char *)a;
    const unsigned char *y = (const unsigned char *)b;
    while (*x && *x == *y)
    {
        ++x;
        ++y;
    }
    return (int)*x - (int)*y;
}
