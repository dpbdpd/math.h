CC=gcc

FLAGS=-Wall -Wextra -Werror -std=c11
LFLAGS=-lcheck -lm

ifeq ($(shell uname), Linux)
	LFLAGS=-lcheck -lm -lsubunit
endif

# Список исходных файлов
SRCS=$(wildcard s21_*.c)
# Список объектных файлов
OBJS=$(SRCS:.c=.o)

all: s21_math.a

add_coverage:
	$(eval FLAGS += --coverage)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Правило для создания статической библиотеки
s21_math.a: $(OBJS)
	ar rcs $@ $^

test: clean s21_math.a
	$(CC) $(FLAGS) -c unittests.c
	$(CC) $(FLAGS) unittests.o s21_*.o -L. s21_math.a $(LFLAGS) -o test
	./test

gcov_report: clean add_coverage test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c

cformat_n:
	clang-format -style=Google -n *.c *.h

cformat_i:
	clang-format -style=Google -i *.c *.h

style_check: cformat_n cformat_i;

clean:
	rm -rf report
	rm -f *.a *.o *.gcda *.gcno *.info test

build: s21_math.a

rebuild: clean s21_math.a

.PHONY: clean build rebuild cformat_n cformat_i style_check add_coverage s21_math.a test
