/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:18:26 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/06 19:51:09 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

int		ft_atoi(char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
int     ft_isalnum(int c); //OK
int     ft_isalpha(int c); //OK
int     ft_isascii(int c); //OK
int     ft_isdigit(int c); //OK
int     ft_isprint(int c); //OK
void    *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *b, int c, size_t len); //OK
char	*ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s, size_t n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int		ft_strlen(char *str);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strrchr(const char *s, int c);
char    *ft_strtrim(char *s);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);

// Falta incorporar funciones extra, etc;
#endif