#include <assert.h>
#include <stddef.h>
#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t n);
int main(void)
{
    unsigned char src[] = {0, 127, 128, 255};
    unsigned char dst[] = {9, 9, 9, 9, 9};
    assert(ft_memcpy(dst, src, sizeof(src)) == dst);
    assert(memcmp(dst, src, sizeof(src)) == 0);
    assert(dst[4] == 9);
    assert(ft_memcpy(dst, src, 0) == dst);
    assert(dst[4] == 9);
    return 0;
}
