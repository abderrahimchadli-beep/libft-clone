#include "libft.h"
#include <assert.h>
#include <string.h>

int main(void)
{
    unsigned char bytes[] = {0, 128, 255, 128};
    int c;
    size_t n;
    for (c = -1; c <= 256; ++c)
        for (n = 0; n <= sizeof(bytes); ++n)
            assert(ft_memchr(bytes, c, n) == memchr(bytes, c, n));
    return 0;
}
