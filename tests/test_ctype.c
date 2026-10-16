#include "libft.h"
#include <assert.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{
    int c;
    assert(setlocale(LC_CTYPE, "C") != NULL);
    for (c = 0; c <= 255; ++c)
    {
        assert(!!ft_isalpha(c) == !!isalpha(c));
        assert(!!ft_isalnum(c) == !!isalnum(c));
        assert(!!ft_isdigit(c) == !!isdigit(c));
        assert(!!ft_isprint(c) == !!isprint(c));
        assert(!!ft_isascii(c) == (c <= 127));
    }
    assert(ft_isascii(-1) == 0);
    assert(ft_isascii(256) == 0);
    return 0;
}
