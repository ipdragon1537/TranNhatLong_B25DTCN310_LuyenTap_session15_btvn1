#include <stdio.h>
int removeDuplicates(int arr[], int size) {
    if (size <= 1) return size;
    int writeIndex = 1;
    for (int readIndex = 1; readIndex < size; readIndex++) {
        int isDuplicate = 0;
        for (int i = 0; i < writeIndex; i++) {
            if (arr[readIndex] == arr[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[writeIndex] = arr[readIndex];
            writeIndex++;
        }
    }
    return writeIndex;
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int newSize = removeDuplicates(arr, size);
    printf("Mang sau khi loai trung lap: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Kich thuoc moi: %d\n", newSize);
    return 0;
}
