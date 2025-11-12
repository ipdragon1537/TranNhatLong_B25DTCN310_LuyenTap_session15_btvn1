#include <stdio.h>
int tinh_tong_chu_so(int n) {
    int sum = 0;
    int chu_so;
    if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int so_can_kiem_tra;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so_can_kiem_tra);
    int ket_qua = tinh_tong_chu_so(so_can_kiem_tra);
    printf("Tong cac chu so cua %d la: %d\n", so_can_kiem_tra, ket_qua);
    
    return 0;
}
