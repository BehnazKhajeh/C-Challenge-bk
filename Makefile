CC = gcc
CFLAGS := -Wall
INCLUDES := -I./

all: build

build: list_test

list_test: list_test.c list.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $+
	
run: 
	./list_test

clean:
	rm -rf ./list_test
