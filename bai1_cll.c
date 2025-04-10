#include <stdio.h>

int main () {
	int n[10];   //Mang luu 10 so nguyen
	int sum = 0;
	printf ("Nhap 10 so nguyen bat ky: ");
	
	for (int i = 0; i < 10; i++) {
		printf ("\nSo thu %d: ", i + 1);
		scanf ("%d", &n[i]);
		sum += n[i];
	}
	
	printf ("\nTong cua 10 so nguyen bat ki la: %d", sum);
	
	return 0;
	
}