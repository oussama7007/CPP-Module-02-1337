




NAME : Fixed

CPP = c++ -Wall -Werror -Wextra -std=c++98

OBJ = ${SRC:.cpp=.o}


SRC = main.cpp Fixed.cpp

all : ${NAME}

${NAME} : ${OBJ}
	${CPP} ${OBJ} -o $@

%.o:%cpp Fixed.h
	${CPP} ${SRC} -c $< -o $@

clean :
	rm -f ${OBJ}


fclean: clean
	rm -f ${NAME}

re : fclean all 