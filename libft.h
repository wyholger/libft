#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
typedef struct s_list
{
	struct s_list		*next;
	void				*content;
}			t_list;
int		ft_atoi(const char *str);
void	ft_bzero(void *b, size_t length);
int		ft_isalnum(int character);
void	*ft_calloc(size_t nmemb, size_t size);	
int		ft_isalpha(int character);
int		ft_isascii(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);
void	*ft_memccpy(void *destination, const void *source, int c, size_t n);
void	*ft_memchr (const void *arr, int c, size_t n);
int		ft_memcmp (const void *arr1, const void *arr2, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memmove (void *dest, const void *source, size_t n);
void	*ft_memset (void *destination, int c, size_t n);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strcpy(char *dest, const char *source);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr (const char *big_str, const char *small_str, size_t len);
int		ft_tolower(int character);
int		ft_toupper(int character);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void*));
#endif