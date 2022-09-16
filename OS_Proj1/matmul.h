/** Global variables **/
/** Matrices: C = A * B 
	* B_tran is a transposed matrix of B,	which flips a matrix over its diagonal.
	* B_tran[i][j] = B[j][i]
	* We use the trnasposed matrix B for easier matrix multiplication.
	*
	* C_serial stores the result from the serial calcuation.
	* C_parallel stores the result from the parallel (multi-process) calculation.
	* We compare C_serial and C_parallel at the end of the exeuciton, and they should match.
	**/
int **A, **B, **B_tran, **C_serial, **C_parallel;

/** matrix size: 
	* A = m x n, B = n x p, B_tran = p x n, C = m x p
	**/
int m, n, p; 

/** function definition **/
void init_matrix();
void alloc_matrix();
void matrix_tranpose();
int linear_mult(int *col_a, int *row_b, int n);

void read_matrix(char *fname);
void print_matrix(int **mat, int l, int m);
int compare_matrices(int **mat1, int **mat2, int m, int n);

