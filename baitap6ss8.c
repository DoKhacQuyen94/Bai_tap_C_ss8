#include <stdio.h>

int main() {
    int n = 4; 
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int sum = 0; 
    printf("Ma trận:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    // Đường chéo chính có vị trí [i][j] = nhau ví dụ [0][0]
    printf("\nCác phần tử trên đường chéo chính:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i];    
    }
    printf("\n\nTổng các phần tử trên đường chéo chính: %d\n", sum);

    return 0;
}
