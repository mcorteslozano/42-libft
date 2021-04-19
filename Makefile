# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 22:59:01 by mario             #+#    #+#              #
#    Updated: 2021/04/19 19:16:16 by mcortes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c	ft_bzero.c	ft_calloc.c		\
	   ft_isalnum.c		ft_isalpha.c	ft_isascii.c	\
	   ft_isdigit.c		ft_isprint.c	ft_itoa.c		\
	   ft_memccpy.c		ft_memchr.c		ft_memcmp.c		\
	   ft_memcpy.c		ft_memmove.c	ft_memset.c		\
	   ft_putchar_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	\
	   ft_putstr_fd.c	ft_split.c		ft_strchr.c		\
	   ft_strdup.c		ft_strjoin.c	ft_strlcat.c	\
	   ft_strlcpy.c		ft_strlen.c		ft_strmapi.c	\
	   ft_strncmp.c		ft_strnstr.c	ft_strrchr.c	\
	   ft_strtrim.c		ft_substr.c		ft_tolower.c	\
	   ft_toupper.c

BONUS =  ft_lstadd_back.c		ft_lstadd_front.c		ft_lstclear.c	\
		 ft_lstdelone.c	ft_lstiter.c	ft_lstlast.c	\
		 ft_lstmap.c	ft_lstnew.c	ft_lstsize.c

OBJS = ft_atoi.o	ft_bzero.o	ft_calloc.o		\
		ft_isalnum.o	ft_isalpha.o	ft_isascii.o	\
		ft_isdigit.o	ft_isprint.o	ft_itoa.o		\
		ft_memccpy.o	ft_memchr.o		ft_memcmp.o		\
		ft_memcpy.o		ft_memmove.o	ft_memset.o		\
		ft_putchar_fd.o	ft_putendl_fd.o	ft_putnbr_fd.o	\
		ft_putstr_fd.o	ft_split.o		ft_strchr.o		\
		ft_strdup.o		ft_strjoin.o	ft_strlcat.o	\
		ft_strlcpy.o	ft_strlen.o		ft_strmapi.o	\
		ft_strncmp.o	ft_strnstr.o	ft_strrchr.o	\
		ft_strtrim.o	ft_substr.o		ft_tolower.o	\
		ft_toupper.o

BONUSO = ft_lstadd_back.o	ft_lstadd_front.o	ft_lstclear.o	\
		 ft_lstdelone.o	ft_lstiter.o	ft_lstlast.o	\
		 ft_lstmap.o	ft_lstnew.o	ft_lstsize.o

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)
	
$(NAME) :
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)	

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJS)

bonus :
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)	
	gcc $(CFLAGS) -c $(BONUS)
	ar rc $(NAME) $(BONUSO)
	ranlib $(NAME)

clean :
	rm -f *.o

fclean:		clean
	rm -f ${NAME}
	rm -f libft.s

re: fclean all

.PHONY: all clean fclean bonus