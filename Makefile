CC = gcc
PROG = times-tables

${PROG}: src/main.c
	$(CC) src/* -I include/ -o build/${PROG}
