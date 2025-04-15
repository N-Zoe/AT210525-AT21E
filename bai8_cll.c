#include <stdio.h>

int main() {
	int n;
	double giaithua = 1;
	
	printf ("Nhap so nguyen duong n = ");
	scanf ("%d", &n);
	
	while (n < 0) {
		printf ("So khong hop le. Vui long nhap lai!\n");
		scanf ("%d", &n);
	}
	
	for (int i = 1; i <= n; i++) {
		giaithua *= i;
	}
	
	printf ("%d! = %g\n", n, giaithua);
	return 0;
}