#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	printf ("Nhap a, b, c : ");
	scanf ("%lf %lf %lf", &a, &b, &c);
	
	if (a == 0){
		printf ("\nPhuong trinh la phuong trinh bac nhat");
		if (b == 0){
			if (c == 0){
				printf ("\nPhuong trinh vo so nghiem");
			}
			else{
				printf ("\nPhuong trinh vo nghiem");
			}
		}
		else{
			double x = -c/b;
			printf ("\nPhuong trinh co 1 nghiem duy nhat: x = %.2lf", x);
		}

	}
	else{
		double delta = pow(b,2) - 4 * a * c;
		if (delta > 0){
			double x1 = ( -b + sqrt(delta)) / ( 2 * a);
			double x2 = ( -b - sqrt(delta)) / ( 2 * a);
			printf ("\nPhuong trinh co 2 nghiem phan biet x1, x2 : ");
			printf ("x1 = %.2lf x2 = %.2lf", x1, x2);
			
		}
		else if (fabs(delta) < 1e-6){
			double x = -b / (2 * a);
			printf ("\nPhuong trinh co nghiem kep: x = %.2lf", x);
		}
		else{
			printf ("\nPhuong trinh vo nghiem");
		}
	}
	return 0;
	
}