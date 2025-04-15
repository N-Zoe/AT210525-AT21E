#include <stdio.h>

int main() {
	int n;
	double giaithua = 1;
	double tong = 1.0;
	
	printf ("Nhap so nguyen duong n = ");
	scanf ("%d", &n);
	
	while (n <= 0) {
		printf ("So khong hop le. Vui long nhap lai!\n");
		scanf ("%d", &n);
	}
	
	for (int i = 2; i <=n; i++) {
		giaithua *= i;
		tong += 1.0 / giaithua;
	}

	printf ("Tong S = 1 + 1/2! + 1/3! + ... + 1/%d! = %.3lf", n, tong);
	return 0;
	
}