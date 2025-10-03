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

    // Selection Sort algorithm - Sắp xếp giảm dần
    int maxIndex, temp;
    for(int i = 0; i < n-1; i++){
        maxIndex = i;  // Giả sử phần tử đầu tiên của phần chưa sắp xếp là lớn nhất
        
        // Tìm phần tử lớn nhất trong phần chưa sắp xếp
        for(int j = i+1; j < n; j++){
            if(a[j] > a[maxIndex]){
                maxIndex = j;  // Cập nhật chỉ số của phần tử lớn nhất
            }
        }
        
        // Swap phần tử lớn nhất với phần tử đầu tiên của phần chưa sắp xếp
        if(maxIndex != i){
            temp = a[i];
            a[i] = a[maxIndex];
            a[maxIndex] = temp;
        }
    }
    
    // In mảng đã sắp xếp
    printf("Mảng sau khi sắp xếp giảm dần: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}