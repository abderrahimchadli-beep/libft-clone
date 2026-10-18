#include "libft.h"
#include <assert.h>
#include <string.h>

int main(void)
{
    unsigned char actual[32], expected[32], source[32];
    size_t from, to, n, i;

    for (from = 0; from < sizeof(actual); ++from)
        for (to = 0; to < sizeof(actual); ++to)
            for (n = 0; n <= sizeof(actual) - from
                    && n <= sizeof(actual) - to; ++n)
            {
                for (i = 0; i < sizeof(actual); ++i)
                    actual[i] = expected[i] = (unsigned char)(i * 19);
                memmove(expected + to, expected + from, n);
                assert(ft_memmove(actual + to, actual + from, n)
                    == actual + to);
                assert(memcmp(actual, expected, sizeof(actual)) == 0);
            }
    for (i = 0; i < sizeof(source); ++i)
        source[i] = (unsigned char)(255 - i);
    assert(ft_memmove(actual, source, sizeof(source)) == actual);
    assert(memcmp(actual, source, sizeof(source)) == 0);
    assert(ft_memmove(source, actual, sizeof(source)) == source);
    assert(ft_memmove(actual + sizeof(actual), source, 0)
        == actual + sizeof(actual));
    return 0;
}
