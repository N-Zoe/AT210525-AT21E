#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(){
	double r;
	
//Nhap bankinh
    printf ("Nhap ban kinh hinh cau R = ");
    scanf ("%lf", &r);
    
// Tinh dien tich va the tich
    double S = 4 * pi * pow(r,2);
    double V = ((double)4/3) * pi * pow(r,3);
    printf ("Dien tich hinh cau S = %.2lf", S);
    printf ("\nThe tich hinh cau V = %.2lf", V);
    


}