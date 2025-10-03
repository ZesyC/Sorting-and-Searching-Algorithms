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

    // Selection Sort algorithm
    int minIndex, temp;
    for(int i = 0; i < n-1; i++){
        minIndex = i;  // Giả sử phần tử đầu tiên của phần chưa sắp xếp là nhỏ nhất
        
        // Tìm phần tử nhỏ nhất trong phần chưa sắp xếp
        for(int j = i+1; j < n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;  // Cập nhật chỉ số của phần tử nhỏ nhất
            }
        }
        
        // Swap phần tử nhỏ nhất với phần tử đầu tiên của phần chưa sắp xếp
        if(minIndex != i){
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
    
    // In mảng đã sắp xếp
    printf("Mảng sau khi sắp xếp: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}