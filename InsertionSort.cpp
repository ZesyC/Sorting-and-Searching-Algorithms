#include <stdio.h>

int main(){
    int n;
    printf("Nhập vào số phần tử của mảng: ");
    scanf("%d", &n);
    int a[n];

    printf("Nhập vào các phần tử của mảng: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    // Insertion Sort algorithm
    int key;
    for(int i = 1; i < n; i++){
        key = a[i];
        int InsertIndex = i;

        for(int j = i - 1; j >= 0 && a[j] > key; j--){
            a[j+1] = a[j];
            InsertIndex = j;
        }
        a[InsertIndex] = key;
    }

    // In mảng đã sắp xếp
    printf("Mảng sau khi sắp xếp: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}