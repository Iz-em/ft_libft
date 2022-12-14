# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 11:40:00 by aoutifra          #+#    #+#              #
#    Updated: 2022/11/20 11:40:01 by aoutifra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_strtrim.c  ft_strjoin.c  ft_substr.c  ft_strnstr.c ft_memcpy.c   ft_strdup.c    ft_calloc.c  ft_memset.c   ft_bzero.c \
ft_memcmp.c    ft_isalnum.c    ft_isprint.c    ft_strlcat.c    ft_strrchr.c \
    ft_isalpha.c    ft_memchr.c     ft_strlcpy.c    ft_tolower.c \
   ft_isascii.c    ft_memmove.c    ft_strlen.c     ft_toupper.c \
ft_atoi.c       ft_isdigit.c    ft_strchr.c     ft_strncmp.c   ft_split.c
OBJS			= $(SRCS:.c=.o) 

HEADER			= libft.h

NAME			= libft.a

all:			$(NAME)


$(NAME): 	$(OBJS) 
				ar -rcs $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(CCFLAGS)  -c $<

clean:
				@$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus