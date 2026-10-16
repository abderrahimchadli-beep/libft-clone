#include <assert.h>
#include <stddef.h>
#include <string.h>
void ft_bzero(void *ptr, size_t n);
void *ft_memset(void *ptr, int value, size_t n);
int main(void)
{
    unsigned char actual[8], expected[8];
    void (*zero_fn)(void *, size_t) = ft_bzero;
    void *(*fill_fn)(void *, int, size_t) = ft_memset;
    memset(actual, 7, sizeof(actual));
    memset(expected, 7, sizeof(expected));
    memset(expected + 1, 0x123, 6);
    assert(fill_fn(actual + 1, 0x123, 6) == actual + 1);
    assert(memcmp(actual, expected, sizeof(actual)) == 0);
    memset(expected + 2, 0, 4);
    zero_fn(actual + 2, 4);
    assert(memcmp(actual, expected, sizeof(actual)) == 0);
    zero_fn(actual, 0);
    fill_fn(actual, -1, 0);
    assert(memcmp(actual, expected, sizeof(actual)) == 0);
    return 0;
}
