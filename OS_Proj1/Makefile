all: matmul matgen

matmul: matmul.c matmul.h matmul_core.c
	gcc matmul.c matmul_core.c -g -o matmul

matgen: matgen.c
	gcc matgen.c -g -o matgen

clean:
	rm -f wc matmul matgen
