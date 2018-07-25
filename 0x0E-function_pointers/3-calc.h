#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/* addition function */
int op_add(int a, int b);
/* substraction function */
int op_sub(int a, int b);
/* multiplication function */
int op_mul(int a, int b);
/* division function */
int op_div(int a, int b);
/* modulo function */
int op_mod(int a, int b);
/* check if value matches operator */
int (*get_op_func(char *s))(int, int);
#endif /* _3_CALC_H_ */
