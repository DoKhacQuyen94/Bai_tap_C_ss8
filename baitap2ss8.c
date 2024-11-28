#include<stdio.h>
int main(){
    int array[5]={9,4,2,0,6};
    int number;
    int tonTai=0;
    printf("Nhap so bat ki: ");
    scanf("%d",&number);
    for (int i=0; i<sizeof(array)/sizeof(int);i++){
        if(number==array[i]){
           printf("Vi tri cua phan tu la: %d\n", i);
           tonTai =1;
           break;
        }
    }
    if(tonTai!=1){
        printf("phan tu khong co trong mang\n");
    }
    return 0;
}