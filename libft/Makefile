SRCS	=	ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_split.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_split.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl.c \
			ft_putnbr_fd.c 

OBJS		= $(addprefix $(BIN_DIR)/, $(SRCS:.c=.o))

BONUS_SRCS	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

BONUS_OBJS 	= $(addprefix $(BIN_DIR)/, $(BONUS_SRCS:.c=.o))

NAME		= libft.a
LIBC		= ar rcs
LIBR		= ranlib
CC			= gcc
RM			= rm -f
RM_DIR		= rm -rf
CFLAGS		= -Wall -Wextra -Werror
BIN_DIR 	= bin

all: $(BIN_DIR) $(OBJS) $(BONUS_OBJS)
	$(LIBC) $(NAME) $(OBJS) $(BONUS_OBJS)
	$(LIBR) $(NAME)

$(BIN_DIR)/%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(BIN_DIR) $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

bonus: $(BIN_DIR) $(BONUS_OBJS)
	$(LIBC) $(NAME) $(BONUS_OBJS)
	$(LIBR) $(NAME)

clean:
	$(RM_DIR) $(BIN_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all