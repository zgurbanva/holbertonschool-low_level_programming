#ifndef CALC_H
#define CALC_H

/* Function prototypes for operations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Function prototype for selecting the operation */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
