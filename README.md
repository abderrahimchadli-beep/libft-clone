# libft-clone

A small C library implementing memory, string-length, and ASCII character helpers.

## Build and test

Requires a C99 compiler, Make, and an archiver (`ar`).

```sh
make
make test
```

The build produces `libft.a`. Run `make clean` to remove objects and test
executables, or `make fclean` to remove the archive too.

## Use in a program

```c
#include "libft.h"

int main(void)
{
    char text[6];
    ft_memcpy(text, "hello", 6);
    return ft_strlen(text) == 5 ? 0 : 1;
}
```

Save the example as `example.c`, then compile and run it from the repository root:

```sh
cc -Wall -Wextra -Werror -Ilibft example.c libft.a -o example
./example
```

## Available functions

| Function | Purpose |
| --- | --- |
| `ft_strrchr` | Find the last character, including the string terminator |
| `ft_strchr` | Find the first character, including the string terminator |
| `ft_memchr` | Find the first matching byte within a bounded range |
| `ft_memcmp` | Compare byte ranges using unsigned-byte ordering |
| `ft_bzero` | Set a byte range to zero |
| `ft_memset` | Fill a byte range with the converted unsigned-byte value |
| `ft_memcpy` | Copy a non-overlapping byte range; return the destination |
| `ft_strlen` | Count bytes before the first NUL; return `size_t` |
| `ft_isalpha` | Recognize ASCII letters |
| `ft_isdigit` | Recognize ASCII decimal digits |
| `ft_isalnum` | Recognize ASCII letters or digits |
| `ft_isascii` | Recognize values from 0 through 127 |
| `ft_isprint` | Recognize printable ASCII values from 32 through 126 |

Character predicates return zero or nonzero and are ASCII-based, not locale-aware.
Memory functions require valid buffers for the requested length.
`ft_memcpy` does not support overlapping ranges. `ft_strlen` requires a valid
NUL-terminated string and counts bytes, not Unicode characters.

This is a partial library: functions such as `ft_memmove`, allocation helpers,
and linked-list utilities are not implemented.

## Tests

`make test` checks byte copying, fill and zero boundaries, zero-length operations,
string lengths, and character predicates across all byte values in the C locale.
