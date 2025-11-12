#include <stdio.h>
#include <stdlib.h>
int tinh_hieu(int a, int b) {
    int hieu = a - b;
    return abs(hieu);
}
float tinh_tich(int a, int b) {
    float tich = (float)a * b;
    return tich;
}

int main() {
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    int ket_qua_hieu = tinh_hieu(num1, num2);
    printf("Hieu (chenh lech) giua %d va %d la: %d\n", num1, num2, ket_qua_hieu);
    float ket_qua_tich = tinh_tich(num1, num2);
    printf("Tich cua %d va %d la: %f\n", num1, num2, ket_qua_tich);

    return 0;
}
