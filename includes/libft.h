/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:10:30 by aradice           #+#    #+#             */
/*   Updated: 2022/04/01 17:10:30 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include "ft_printf.h"
# include "get_next_line.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	*ft_memmove(void *destination, const void *source, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
char	*ft_strchr(const char *string, int searchedChar);
char	*ft_strdup(const char *source);
size_t	ft_strlcat(char *destination, const char *source, size_t size);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *first, const char *second, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t size);
char	*ft_strrchr(const char *string, int searchedChar);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
