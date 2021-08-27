exec = a.out
sources = $(wildcard src/*/*.c)
s = $(wildcard src/main.c)
objects = $(sources:.c=.o) $(s:.c=.o)
flags = -g -Wall -Wextra -lm -ldl -fPIC -rdynamic


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%/%.h
	gcc -c $(flags) $< -o $@

clean:
	-rm *.out
	-rm src/*/*.o
	-rm src/*.o

lint:
	clang-tidy src/*/*.c src/include/*/*.h
