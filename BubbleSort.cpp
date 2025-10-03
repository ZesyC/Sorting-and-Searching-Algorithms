#include <stdio.h>

int main(){
    int n;
    printf("Nhập vào số phần tử của mảng: ");
    scanf("%d", &n);
    int a[n]; 

    printf("Nhập vào các phần tử của mảng:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    // Bubble Sort algorithm
    int temp;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){  // So sánh các phần tử liền kề
            if(a[j] > a[j+1]){           // So sánh a[j] với a[j+1]
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
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