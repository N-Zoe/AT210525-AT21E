#include <stdio.h>

int main () {
	int x;
	printf ("Nhap diem trung binh: ");
	scanf ("%d", &x);
	
// Xep loai
    if (x < 5.0) {
    	printf ("Xep loai: Yeu");
	}
	else if (x < 7.0) {
		printf ("Xep loai: TB");
	}
	else if (x < 8.0) {
		printf ("Xep loai: Kha");
	}
	else if (x < 9.0) {
		printf ("Xep loai: Gioi");
	}
	else {
		printf ("Xep loai: Xuat sac");
	}
		return 0;
	
}