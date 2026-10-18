#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

void    ft_bzero(void *ptr, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *ptr, int value, size_t n);
size_t  ft_strlen(const char *str);

int ft_memcmp(const void *a, const void *b, size_t n);

void *ft_memchr(const void *s, int c, size_t n);

char *ft_strchr(const char *s, int c);

char *ft_strrchr(const char *s, int c);

int ft_strcmp(const char *a, const char *b);

#endif

