#include <stdio.h>

int main() {
	int x;
	printf ("Nhap mot so nguyen duong bat ky: ");
	scanf ("%d", &x);
	while (x <= 0){
		printf ("So nguyen khong hop le. Vui long nhap lai!\n");
//		printf ("Nhap mot so nguyen duong bat ky: ");
	    scanf ("%d", &x);
	}
	
	int tong = 0;
	for (int i = 1; i <= x / 2; i++) {
		if (x % i == 0) {
			tong += i;
		}
	}
	if (tong == x)
		printf ("\nSo nguyen %d la so hoan hao", x);
	else
		printf ("\nSo nguyen %d khong la so hoan hao", x);
	
}
