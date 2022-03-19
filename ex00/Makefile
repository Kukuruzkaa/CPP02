# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 23:17:42 by ddiakova          #+#    #+#              #
#    Updated: 2022/03/19 14:57:22 by ddiakova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= fixed

SRCS			= main.cpp \
					Fixed.cpp
				
CC 				= c++

CFLAGS 			= -g -Wall -Werror -Wextra -std=c++98

RM 				= rm -rf

OBJS            = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME):    $(OBJS) 
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:				
				$(RM) $(OBJS)
                                
fclean:         clean 
				$(RM) $(NAME)

re:             fclean all

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

.PHONY: 		all clean fclean re