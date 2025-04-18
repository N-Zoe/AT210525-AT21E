#include <stdio.h>

void doiCoSo(int n, int base) {
    char result[100];
    int i = 0;

    while (n > 0) {
        int du = n % base;
        if (du < 10)
            result[i] = du + '0';
        else
            result[i] = du - 10 + 'A'; // dung A-F cho co so 16
        i++;
        n /= base;
    }

    // In nguoc lai ket qua
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", result[j]);
    }
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so lon hon 0.\n");
    } else {
        printf("\nHe nhi phan (co so 2): ");
        doiCoSo(n, 2);

        printf("\nHe bat phan (co so 8): ");
        doiCoSo(n, 8);

        printf("\nHe thap luc phan (co so 16): ");
        doiCoSo(n, 16);
        
        printf ("\n");
    }

    return 0;
}


