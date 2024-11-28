#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Các phần tử trong mảng từ cuối về đầu:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%3d", arr[i]);
    }
    printf("\n");

    return 0;
}
