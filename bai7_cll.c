#include <stdio.h>

int main() {
	int n;
	double tong = 0.0;
	
	printf ("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	
	while (n <= 0){
		printf ("Vui long nhap lai!\n");
		scanf ("%d", &n);
	}
	
	for (int i = 1; i <= n; i++){
		tong += 1.0 / i;
	}
	
	printf ("Tong S = 1 + 1/2 + 1/3 + ... + 1/%d = %.3lf", n, tong);
	return 0;
	
}