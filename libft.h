/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:18:26 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/08 19:25:53 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

// PART 1 FUNCTIONS
int		ft_atoi(const char *str); // Compilación: OK - Norminette: OK
void    ft_bzero(void *s, size_t n); // Compilación: OK - Norminette: OK - Tester: OK
void    *ft_calloc(size_t nmemb, size_t size);
int     ft_isalnum(int c); // Compilación: OK - Norminette: OK - Tester: OK
int     ft_isalpha(int c); // Compilación: OK - Norminette: OK - Tester: OK
int     ft_isascii(int c); // Compilación: OK - Norminette: OK - Tester: OK
int     ft_isdigit(int c); // Compilación: OK - Norminette: OK - Tester: OK
int     ft_isprint(int c); // Compilación: OK - Norminette: OK - Tester: OK
void    *ft_memccpy(void *dest, const void *src, int c, size_t n); // Compilación: OK - Norminette: OK - Tester: OK
void    *ft_memchr(const void *s, int c, size_t n); // Compilación: OK - Norminette: OK - Tester: OK
int     ft_memcmp(const void *s1, const void *s2, size_t n); // Compilación: OK - Norminette: OK - Tester: OK
void	*ft_memcpy(void *dest, const void *src, size_t n); // Compilación: OK - Norminette: OK - Tester: OK
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *b, int c, size_t len); // Compilación: OK - Norminette: OK - Tester: OK
char	*ft_strchr(const char *s, int c); // Compilación: OK - Norminette: OK - Tester: OK
char    *ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // Compilación: OK - Norminette: OK - Tester: OK
size_t  ft_strlcpy(char *dest, char *src, size_t size); // Compilación: OK - Norminette: OK - Tester: OK
size_t	ft_strlen(const char *s); // Compilación: OK - Norminette: OK - Tester: OK
int		ft_strncmp(const char *s1, const char *s2, size_t n); // Compilación: OK - Norminette: OK - Tester: OK
char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strrchr(const char *s, int c);
int     ft_tolower(int c); // Compilación: OK - Norminette: OK - Tester: OK
int     ft_toupper(int c); // Compilación: OK - Norminette: OK - Tester: OK

// PART 2 FUNCTIONS
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_putchar_fd(char c, int fd); // Compilación: OK - Norminette: OK - Tester: OK
void    ft_putstr_fd(char *s, int fd); // Compilación: OK - Norminette: OK - Tester: OK
void    ft_putendl_fd(char *s, int fd); // Compilación: OK - Norminette: OK - Tester: OK
void    ft_putnbr_fd(int n, int fd); // Compilación: OK - Norminette: OK - Tester: OK

#endif