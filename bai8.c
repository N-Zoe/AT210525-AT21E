#include <stdio.h>
#include <math.h>

int Kiemtratamgiac (double a, double b, double c) {
	return ((a + b > c) && (a + c > b) && (b + c > a));
}
int main () {
	double a, b, c, p, dientich, chuvi;
	printf ("Nhap 3 canh a, b, c: ");
	scanf ("%lf %lf %lf", &a, &b, &c);
	
// Kiem tra 3 canh co tao thanh tam giac khong?
    if (Kiemtratamgiac(a, b, c)) {
    	printf ("3 canh tao thanh mot tam giac");
	
// Kiem tra loai tam giac
    if ((a == b) && (b == c)) {
   	printf ("\nTam giac deu");
    }
    else if ((a == b) || (b == c) || (a == c)) {
   	  if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
   		printf ("\nTam giac vuong can");
	   }
	else {
		printf ("\nTam giac can");
	}
    }
    else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
   	    printf ("\nTam giac vuong");
    }
    else {
   	    printf ("\nTam giac thuong");
    }
   
// Tinh dien tich va chu vi
    p = (a + b +c) / 2;     // Nua chu vi
    dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    chuvi = a + b +c;
    
    printf ("\nDien tich tam giac: %.2lf", dientich);
    printf ("\nChu vi tam giac: %.2lf", chuvi);
}
else {
		printf ("3 canh khong tao thanh mot tam giac");
	}
  return 0;
    
}