#include <stdio.h>
int findLeastFrequent(int arr[], int n) {
    if (n == 0) return -1;

    int minCount = n + 1;
    int result = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count < minCount) {
            minCount = count;
            result = arr[i];
        }
    }
    return result;
}
int main() {
    int arr[] = {1, 3, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int least = findLeastFrequent(arr, n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == least) count++;
    }

    printf("Phan tu it xuat hien nhat: %d, so lan xuat hien: %d\n", least, count);

    return 0;
}
