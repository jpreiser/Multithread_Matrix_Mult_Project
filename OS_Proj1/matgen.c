#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void print_usage()
{
		printf("usage: ./mat_gen <m> <n> <p>\n");
		printf("Generate two matrices, A and B.\n");
		printf("Size of A: m x n\n");
		printf("Size of B: n x p\n");
		printf("0 < m <= 30\n");
		printf("0 < n, p <= 10000\n");
}

int main(int argc, char **argv)
{
		int m, n, p;
		int i,j;

		if(argc != 4) {
				print_usage();
				return 0;
		}
		
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		p = atoi(argv[3]);
		
		if(m <=0 || n <= 0 || p <= 0 || m > 30 || n > 10000 || p > 10000) {
				print_usage();
				return 0;
		}
				
		srand(time(NULL));

		printf("%d %d %d\n\n", m, n, p);

		for(i = 0; i < m; i++) {
				for(j = 0; j < n; j++) {
						printf("%d ", rand() % 100);
				}
				printf("\n");
		}
		
		printf("\n");

		for(i = 0; i < n; i++) {
				for(j = 0; j < p; j++) {
						printf("%d ", rand() % 100);
				}
				printf("\n");
		}

		return 0;
}

