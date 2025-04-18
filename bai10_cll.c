#include <stdio.h>

int fibonaci(int n) {
	if (n == 1 || n == 2)
	return 1;
	
	int f1 = 1, f2 = 1, fn;   // f1 = f(n-2), f2 = f(n-1)
	int i;
	for (i = 3; i <= n; i++) {
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	return fn;
}

int main() {
	int n;
	scanf ("%d", &n);
	if (n <= 0) {
		printf ("Vui long nhap n lon hon 0 !\n");
	} else {
		printf ("So thu %d cua day fibonaci la : %d\n", n, fibonaci(n));
	}
	
	return 0;
	
}