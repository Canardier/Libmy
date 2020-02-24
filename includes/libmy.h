#ifndef LIBMY_H
#define LIBMY_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

char		*my_itoa(int n);
char		*my_strcat(char *dest, const char *src);
char		*my_strchr(const char *s, int c);
char		*my_strcpy(char *dest, char const *src);
char		*my_strdup(const char *s);
char		*my_strjoin(char const *s1, char const *s2);
char		*my_strmap(char const *s, char (*f)(char));
char		*my_strmapi(char const *s, char (*f)(unsigned int, char));
char		*my_strmstr(const char *str, const char *chr, size_t n);
char		*my_strncat(char *dest, const char *src, size_t n);
char		*my_strncpy(char *dest, const char *src, size_t n);
char		*my_strnew(size_t size);
char		*my_strrchr(const char *s, int c);
char		**my_strsplit(char const *s, char c);
char		*my_strstr(const char *meule_de_foin, const char *aiguille);
char		*my_strsub(char const *s, unsigned int start, size_t len);
char		*my_strtrim(char const *s);
int			my_atoi(const char *nptr);
int			my_isalnum(int c);
int			my_isalpha(int c);
int			my_isascii(int c);
int			my_isdigit(int c);
int			my_isprint(int c);
int 		my_memcmp(const void *s1, const void *s2, size_t n);
int			my_strcmp(char const *s1, char const *s2);
int			my_strequ(char const *s1, char const *s2);
int			my_strlcat(char *dest, char *src, unsigned int size);
int			my_strncmp(const char *s1, const char *s2, size_t n);
int			my_strnequ(char const *s1, char const *s2, size_t n);
int			my_tolower(int c);
int			my_toupper(int c);
size_t		my_strlen(const char *s);
void		my_bzero(void *s, size_t n);
void		*my_memalloc(size_t size);
void		*my_memccpy(void *dest, const void *src, int c, size_t n);
void		*my_memchr(const void *s, int c, size_t n);
void		*my_memcpy(void *dest, const void *src, size_t n);
void		my_memdel(void **ap);
void		*my_memmove(void *dest, const void *src, size_t n);
void		*my_memset(void *s, int c, size_t n);
void		my_pustr(char const *s);
void		my_putchar(char c);
void		my_putchar_fd(char c, int fd);
void		my_putendl(char const *s);
void		my_putendl_fd(char const *s, int fd);
void		my_putnbr_fd(int n, int fd);
void		my_putnbr(int n);
void		my_putstr(char const *s);
void		my_putstr_fd(char const *s, int fd);
void		my_strclr(char *s);
void		my_strdel(char **as);
void		my_striter(char *s, void (*f)(char *));
void		my_striteri(char *s, void (*f)(unsigned int, char *));

#endif
