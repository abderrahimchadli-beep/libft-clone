#include "libft.h"
#include <assert.h>
#include <string.h>

int main(void)
{
    unsigned char a[] = {0, 128, 255}, b[] = {0, 128, 127};
    assert(ft_memcmp(a, b, 0) == 0);
    assert(ft_memcmp(a, b, 2) == 0);
    assert(ft_memcmp(a, b, 3) > 0);
    assert(ft_memcmp(b, a, 3) < 0);
    assert(ft_memcmp(a, a, 3) == memcmp(a, a, 3));
    return 0;
}
