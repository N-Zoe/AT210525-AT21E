#include <stdio.h>

int main () {
	int n;
	int isPrime = 1;
	
	printf ("Nhap mot so nguyen: ");
	scanf ("%d", &n);
	
	if (n <= 1) {
		isPrime = 0;    // 0 va 1 khong phai la so nguyen to
	}
	else {
		for (int i = 2; i * i <= n; i++){
			if (n % i == 0) {
			    isPrime = 0;    // Chia het cho i thi khong phai so nguyen to
			    break; 
			}
		}
	}
	
	if (isPrime) {
		printf ("%d la so nguyen to\n", n);
	}
	else{
		printf ("%d khong phai la so nguyen to\n", n);
	}
	
	
	return 0;
	
}