# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 11:53:00 by qfremeau          #+#    #+#              #
#    Updated: 2016/02/12 12:29:57 by qfremeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# DEPENDENCIES

# **************************************************************************** #

NAME = libft.a

# COMPILATION
CC = clang
CCFLAGS = -Wall -Werror -Wextra

# DIRECTORIES
SRCDIR = src
OBJDIR = obj
INCDIR = include

# SOURCES
SRC =\
	basics/memory/ft_bzero.c\
	basics/memory/ft_memalloc.c\
	basics/memory/ft_memccpy.c\
	basics/memory/ft_memchr.c\
	basics/memory/ft_memcmp.c\
	basics/memory/ft_memcpy.c\
	basics/memory/ft_memdel.c\
	basics/memory/ft_memmove.c\
	basics/memory/ft_memset.c\
	\
	basics/print/ft_putchar.c\
	basics/print/ft_putchar_fd.c\
	basics/print/ft_putendl.c\
	basics/print/ft_putendl_fd.c\
	basics/print/ft_putnbr.c\
	basics/print/ft_putnbr_fd.c\
	basics/print/ft_putstr.c\
	basics/print/ft_putstr_fd.c\
	\
	basics/string/ft_strcat.c\
	basics/string/ft_strchr.c\
	basics/string/ft_strclr.c\
	basics/string/ft_strcmp.c\
	basics/string/ft_strcpy.c\
	basics/string/ft_strdel.c\
	basics/string/ft_strdup.c\
	basics/string/ft_strequ.c\
	basics/string/ft_striter.c\
	basics/string/ft_striteri.c\
	basics/string/ft_strjoin.c\
	basics/string/ft_strlcat.c\
	basics/string/ft_strlen.c\
	basics/string/ft_strmap.c\
	basics/string/ft_strmapi.c\
	basics/string/ft_strncat.c\
	basics/string/ft_strncmp.c\
	basics/string/ft_strncpy.c\
	basics/string/ft_strnequ.c\
	basics/string/ft_strnew.c\
	basics/string/ft_strnstr.c\
	basics/string/ft_strrchr.c\
	basics/string/ft_strsplit.c\
	basics/string/ft_strstr.c\
	basics/string/ft_strsub.c\
	basics/string/ft_strtrim.c\
	\
	basics/types/ft_isalnum.c\
	basics/types/ft_isalpha.c\
	basics/types/ft_isascii.c\
	basics/types/ft_isdigit.c\
	basics/types/ft_isprint.c\
	basics/types/ft_isspace.c\
	basics/types/ft_tolower.c\
	basics/types/ft_toupper.c\
	basics/types/ft_uporlow.c\
	\
	containers/array/ft_free_2darray.c\
	containers/array/ft_free_array.c\
	containers/array/ft_malloc_2darray.c\
	containers/array/ft_malloc_array.c\
	\
	containers/list/ft_lstadd.c\
	containers/list/ft_lstdel.c\
	containers/list/ft_lstdelone.c\
	containers/list/ft_lstiter.c\
	containers/list/ft_lstmap.c\
	containers/list/ft_lstnew.c\
	\
	containers/circlst/ft_circlst_add.c\
	containers/circlst/ft_circlst_create.c\
	containers/circlst/ft_circlst_del.c\
	containers/circlst/ft_circlst_delone.c\
	\
	utils/cast/ft_atoi.c\
	utils/cast/ft_itoa.c\
	\
	utils/math/ft_sqrt.c\
	utils/math/ft_swap.c

# **************************************************************************** #

# SPECIAL CHARS
LOG_CLEAR		= \033[2K
LOG_UP 			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# **************************************************************************** #

.PHONY: all $(NAME) build clean fclean re
.SILENT:

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCS_DIRS = $(addsuffix /, $(INCDIR))
INCS = $(addprefix -I , $(INCS_DIRS))

all: $(NAME)

$(NAME): build $(LIBS) $(OBJS)
	echo -e "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)assembling...$(LOG_NOCOLOR)$(LOG_UP)"
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	echo -e "$(LOG_CLEAR)$(NAME)... compiled $(LOG_GREEN)✓$(LOG_NOCOLOR)"

build:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJS_DIRS)

clean:
	rm -f $(LIBS)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	echo -e "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(CC) -c -o $@ $< $(INCS) $(CCFLAGS)
