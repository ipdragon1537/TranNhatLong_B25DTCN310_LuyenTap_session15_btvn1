#include <stdio.h>
void timPhanTuXuatHienNhieuNhat(int arr[], int n) {
    int maxCount = 0;
    int phanTu = arr[0];
    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                dem++;
            }
        }
        if (dem > maxCount) {
            maxCount = dem;
            phanTu = arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat: %d\n", phanTu);
    printf("So lan xuat hien: %d\n", maxCount);
}
int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    timPhanTuXuatHienNhieuNhat(arr, n);
    return 0;
}
