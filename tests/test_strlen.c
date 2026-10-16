#include <assert.h>
#include <stddef.h>
#include <string.h>
size_t ft_strlen(const char *str);
int main(void)
{
    const char embedded[] = {'a', '\0', 'b', '\0'};
    size_t (*length_fn)(const char *) = ft_strlen;
    assert(length_fn("") == 0);
    assert(length_fn("libft") == strlen("libft"));
    assert(length_fn(embedded) == 1);
    return 0;
}
