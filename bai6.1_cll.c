#include <stdio.h>
#include <math.h>

int ucln(int a, int b){
	while (b!= 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
	int a, b;
	printf ("Nhap hai so nguyen a, b: ");
	scanf ("%d %d", &a, &b);
	
	// Dung tri tuyet doi tranh a hoac b am
	int absA = abs(a);
	int absB = abs(b);
	int kq_ucln = ucln(absA, absB);
	int bcnn = (absA * absB) / kq_ucln;
	printf ("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, kq_ucln);
	printf ("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);
	
	return 0;
	
}