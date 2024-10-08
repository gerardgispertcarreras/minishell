/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:01:55 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/20 15:16:45 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
unsigned long	ft_strlen(const char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
long			ft_atoi(const char *str);
char			*ft_strnstr(const char *big, const char *little, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, size_t start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putchar_fd(int fd, char c);
void			ft_putstr_fd(int fd, char *s);
void			ft_putendl_fd(int fd, char *s);
void			ft_putnbr_fd(int n, int fd);
char			**ft_split(char const *s, char c);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
size_t			ft_copy(char *dst, char *src, size_t size);
size_t			ft_char_count_in_str(const char *s, const char c);
char			*ft_ltoa(long n);
void			ft_free_char_array(char **array);
char			*ft_char_found_in_str(const char *s, const char c);
char			*ft_strconcat(char *s1, char *s2, int free_s1, int free_s2);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_char_pos_in_str(char *s, char c);
void			ft_free_ptr(void *ptr);
char			*ft_del_char_from_str(char *s, char c);
int				ft_last_pos_of_char_in_str(char *s, char c);
size_t			ft_replace_char_in_str(char *s, char c_replace, char c_with);

#endif
