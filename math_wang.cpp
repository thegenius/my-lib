#include <math_wang.h>
int GCD(int m, int n)
{	return n?GCD(n,m%n):m;	}

int LCM(int m, int n)
{	return (m*n)/GCD(m,n);	}


