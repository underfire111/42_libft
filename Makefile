# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/21 01:30:51 by ppereira          #+#    #+#              #
#    Updated: 2022/04/23 13:03:18 by ppereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name
NAME			:= libft.a

# Directories
PATH_SRC		:= array	\
				   convert	\
				   linked-list	\
				   memory	\
				   put		\
				   string	\
				   type		\

PATH_OBJ		:= objects

# Sources
SRCS			:= $(shell find $(PATH_SRC) -name *.c)

# Objects
OBJS			:= $(SRCS:%.c=$(PATH_OBJ)/%.o)

# Dependencies
DEPENDENCY		:= $(OBJS:.o=.d)

# Includes
INCLUDE			:= $(shell find $(PATH_SRC) -type d)

# Compiler
COMPILE			:= gcc 

# Flags - compilation
FLAG_WARNING	:= -Wall -Wextra -Werror
FLAG_INCLUDE	:= $(addprefix -I, $(INCLUDE))
FLAG_MAKEFILE	:= -MMD -MP
FLAG_DEBUG		:= -g
FLAGS_COMP		:=	$(FLAG_WARNING) $(FLAG_MAKEFILE)

# Remove
REMOVE			:= rm -rf

# Others
ARRCS			:= ar rcs


# Color Code and template code
_YELLOW				:= \e[38;5;184m
_GREEN				:= \e[38;5;46m
_RESET				:= \e[0m
_INFO				:= [$(_YELLOW)INFO$(_RESET)]
_SUCCESS			:= [$(_GREEN)SUCCESS$(_RESET)]


# Functions
all: 		$(NAME)
			@ printf "$(_SUCCESS) Compilation done\n"

$(NAME):	$(OBJS)
			@ $(ARRCS) $@ $(OBJS)

$(PATH_OBJ)/%.o:	%.c
			@ mkdir -p $(dir $@)
			@ $(CC) $(FLAGS_COMP) -c $< -o $@

clean:
			@ $(REMOVE) $(PATH_OBJ)
			@ printf "$(_INFO) Deleted files and directory\n"


fclean: 	clean
			@ $(REMOVE) $(NAME)

re:			fclean all
			
list:		re
			@ ar tv $(NAME)

.PHONY:		all clean fclean re

-include $(DEPENDENCY)
