#include <stdio.h>

int main() {
	double a, b, c, d, e, f, x, y;
	printf ("Nhap a, b, c, d, e, f: ");
	scanf ("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
	
// Giai he phuong trinh
    double D = (a * e) - (b * d);
    double Dx = (c * e) - (b * f);
    double Dy = (a * f) - (c * d);
    
    if (D == 0) {
    	if ((Dx == 0) && (Dy == 0)) {
    		printf ("He phuong trinh vo so nghiem");
		}
		else {
			printf ("He phuong trinh vo nghiem");
		}
	}
	else {
		x = Dx / D;
		y = Dy / D;
		printf ("He phuong trinh co nghiem: x = %.2lf y = %.2lf", x, y);
	
	}
	return 0;
	
}