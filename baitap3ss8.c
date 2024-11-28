#include<stdio.h>
int main(){
    int rowCol;
    printf("Nhap so nguyen bat ki:");
    scanf("%d",&rowCol);
    if(rowCol<=0){
        printf("error\n");
        return 1;
    }
    int array[rowCol][rowCol];
    for (int i=0;i < sizeof(array)/sizeof(array[0]);i++){
        for (int j = 0; j < sizeof(array[0])/sizeof(int); j++)
        {
            printf("nhap so o hang %d cot %d:",i+1,j+1);
            scanf("%d", &array[i][j]);
        }
        
    }
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        for (int j = 0; j < sizeof(array[0])/sizeof(int); j++) {
            printf("%5d", array[i][j]); 
        }
        printf("\n");
    }
    return 0;
}