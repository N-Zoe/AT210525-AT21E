#include <stdio.h>

int main () {
	int thang, nam, songay = 0;
	scanf ("%d %d", &thang, &nam);
	
// Kiem tra thang hop le
    if (thang < 1 || thang > 12) {
    	printf ("Thang khong hop le, nhap thang tu 1 den 12 !");
    	return 0;
	}
	
// Kiem tra thang co bao nhieu ngay
    switch (thang) {
    	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		     songay = 31;
		     break;
		case 4: case 6: case 9: case 11:
			songay = 30;
			break;
		case 2:
			if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0) {
				songay = 29;    // Nam nhuan
			}
			else {
				songay = 28;    // Khong phai nam nhuan
			}
			break;
			
	}
	
// In ra man hinh
    printf ("\nThang %d nam %d co %d ngay.", thang, nam, songay);
	
	return 0;
}