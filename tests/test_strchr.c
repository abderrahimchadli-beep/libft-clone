#include "libft.h"
#include <assert.h>
#include <string.h>

int main(void)
{
    const char text[] = {'a', (char)128, 'b', 'a', '\0'};
    int c;
    for (c = 0; c <= 255; ++c)
        assert(ft_strchr(text, c) == strchr(text, c));
    assert(ft_strchr("", 0) != NULL);
    assert(ft_strchr("", 'x') == NULL);
    return 0;
}
