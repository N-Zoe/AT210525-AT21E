#include <stdio.h>

int main(){
	int a, b;
	
//Nhap gia tri cua a, b
	printf ("Nhap a = ");
	scanf ("%d", &a);
	printf ("Nhap b = ");
	scanf ("%d", &b);
	
	int tong = a + b, hieu = a - b, tich = a * b, thuong = a / b;
	printf ("Tong: %d \nHieu: %d \nTich: %d \nThuong: %d\n", tong, hieu, tich, thuong);
	
//Nhan xet ket qua phep chia
	if(b==0){
		printf ("Loi phep tinh");
	}
	else{
		if(a%b==0){
			printf ("So nguyen a chia het cho so nguyen b");
		}
		else{
			printf ("So nguyen a khong chia het cho so nguyen b");
		}
	}

	
}