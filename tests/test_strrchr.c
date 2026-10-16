#include "libft.h"
#include <assert.h>
#include <string.h>

int main(void)
{
    const char text[] = {'a', (char)128, 'b', 'a', '\0'};
    int c;
    for (c = 0; c <= 255; ++c)
        assert(ft_strrchr(text, c) == strrchr(text, c));
    assert(ft_strrchr("", 0) != NULL);
    assert(ft_strrchr("", 'x') == NULL);
    return 0;
}
