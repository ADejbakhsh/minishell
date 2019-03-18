# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 16:16:57 by adejbakh          #+#    #+#              #
#    Updated: 2019/03/15 11:06:49 by adejbakh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

COMP			=	clang
FLAG			=	-Wall -Wextra -Werror -g3

FILES_C = argv_to_tab.c\
    argv_without_option.c\
    ft_atoi.c\
    ft_bzero.c\
    ft_cut_before_last_cara.c\
    ft_int_tab.c\
    ft_itoa.c\
    ft_putchar.c\
    ft_putendl.c\
    ft_putin.c\
    ft_putnbr.c\
    ft_putstr.c\
    ft_putstr_fd.c\
    ft_realloc.c\
    ft_sort_argv.c\
    ft_str_contain_only.c\
    ft_strcat.c\
    ft_strchr.c\
    ft_strcmp.c\
    ft_strcpy.c\
    ft_strcspn.c\
    ft_strdel.c\
    ft_strdup.c\
    ft_strlcat.c\
    ft_strlen.c\
    ft_strnew.c\
    ft_strsub.c\
    ft_strncat.c\
    ft_strjoin.c\

FILES_O			=	$(FILES_C:.c=.o)
FILES_H			=	libft.h

# Directories
SRCS_D			=	./srcs/
OBJS_D			=   ./objs/
INCL_D 			=	./includes/

# Paths
SRCS			= 	$(addprefix $(SRCS_D), $(FILES_C))
OBJS			=	$(addprefix $(OBJS_D), $(FILES_O))
INCL			=	$(addprefix $(INCL_D), $(FILES_H))

all				:	$(NAME)

$(NAME)			:	$(OBJS)
					@echo "\nAssemblage et création de la librairie $(NAME)"
					@ar rc $(NAME) $(OBJS)
					@ranlib $(NAME)
					@echo "Libft terminée"

$(OBJS_D)%.o	:	$(SRCS_D)%.c $(INCL)
					@echo -e "\033[2K\c"
					@echo "\rCréation de l'objet $@\c"
					@mkdir -p $(OBJS_D)
					@$(COMP) $(FLAG) -I $(INCL_D) -o $@ -c $<

clean			:
					@echo "Nettoyage des objets ./libft/objs/"
					@rm -rf $(OBJS_D)

fclean			:	clean
					@echo "Nettoyage de la librairie $(NAME)"
					@rm -f $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re
