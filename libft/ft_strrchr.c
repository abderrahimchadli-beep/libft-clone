#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *last = NULL;
    unsigned char target = (unsigned char)c;
    while (1)
    {
        if ((unsigned char)*s == target)
            last = s;
        if (*s == '\0')
            return (char *)last;
        ++s;
    }
}
