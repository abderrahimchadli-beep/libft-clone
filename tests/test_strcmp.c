#include "libft.h"
#include <assert.h>
#include <string.h>

int main(void)
{
    const char high[] = {(char)255, '\0'};
    const char *strings[] = {"", "a", "ab", "abc", "b", high};
    size_t i, j;
    for (i = 0; i < sizeof(strings) / sizeof(strings[0]); ++i)
        for (j = 0; j < sizeof(strings) / sizeof(strings[0]); ++j)
        {
            int actual = ft_strcmp(strings[i], strings[j]);
            int expected = strcmp(strings[i], strings[j]);
            assert((actual > 0) - (actual < 0) == (expected > 0) - (expected < 0));
        }
    return 0;
}
