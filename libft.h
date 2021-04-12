/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:18:26 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/12 18:18:39 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

// FIRST PART
int		ft_atoi(const char *str); // Tester: OK - Norminette: OK
void	ft_bzero(void *s, size_t n); // Tester: OK - Norminette: OK
void	*ft_calloc(size_t nmemb, size_t size); // Tester: OK - Norminette: FAILED
int		ft_isalnum(int c); // Tester: OK - Norminette: OK
int		ft_isalpha(int c); // Tester: OK - Norminette: OK
int		ft_isascii(int c); // Tester: OK - Norminette: OK
int		ft_isdigit(int c); // Tester: OK - Norminette: OK
int		ft_isprint(int c); // Tester: OK - Norminette: OK
void	*ft_memccpy(void *dest, const void *src, int c, size_t n); // Tester: OK - Norminette: OK
void	*ft_memchr(const void *s, int c, size_t n); // Tester: OK - Norminette: OK
int		ft_memcmp(const void *s1, const void *s2, size_t n); // Tester: OK - Norminette: OK
void	*ft_memcpy(void *dest, const void *src, size_t n); // Tester: OK - Norminette: OK
void	*ft_memmove(void *dest, const void *src, size_t n); // Pending test...
void	*ft_memset(void *b, int c, size_t len); // Tester: OK - Norminette: OK
char	*ft_strchr(const char *s, int c); // Tester: OK - Norminette: OK
char	*ft_strdup(const char *s); // Tester: OK - Norminette: FAILED
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // Tester: OK - Norminette: OK
size_t	ft_strlcpy(char *dest, char *src, size_t size); // Tester: OK - Norminette: OK
size_t	ft_strlen(const char *s); // Tester: OK - Norminette: OK
int		ft_strncmp(const char *s1, const char *s2, size_t n); // Tester: OK - Norminette: OK
char	*ft_strnstr(const char *big, const char	*little, size_t len); // Tester: OK - Norminette: OK
char	*ft_strrchr(const char *s, int c); // Tester: OK - Norminette: OK
int		ft_tolower(int c); // Tester: OK - Norminette: OK
int		ft_toupper(int c); // Tester: OK - Norminette: OK
// SECOND PART
char	*ft_substr(char const *s, unsigned int start, size_t len); // Tester: OK - Norminette: FAILED
char	*ft_strjoin(char const *s1, char const *s2); // Tester: OK - Norminette: FAILED
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd); // Tester: OK - Norminette: OK
void	ft_putstr_fd(char *s, int fd); // Tester: OK - Norminette: OK
void	ft_putendl_fd(char *s, int fd); // Tester: OK - Norminette: OK
void	ft_putnbr_fd(int n, int fd); // Tester: OK - Norminette: OK
// BONUS PART
typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;
t_list	*ft__lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void*(*f)(void*), void (*del)(void *));
#endif