Assigment 1 for UGA CS4730 Operating Systems

Convert matrix multiplier to use multiple threads
to execute multiplication.

The matrix multiplication multi-threaded method is accomplished 
by taking the m threads sent to parallel_mat_mult and passing each 
to the child_process_core onceeach thread is confirmed created by 
the fork process. 

Inside of child_process_core, each thread, which is responsible
for one row, is passed through linear_mult p times, and each time the
resulting value is written to the pipe.

As values are written to the pipe, they are read by the parent process and
placed in their correct place in C_parallel. This is how the main multiplication
function is handled.

At the time of submission, it seems like my process is able to work correctly as long 
as m < 10, n < 10, and p < 10. For some reason it stops working past that point. 

The wait and crash handling is accomplished by