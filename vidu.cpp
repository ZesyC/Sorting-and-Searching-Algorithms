#include <stdio.h>

int main(){
    int a[6] = {42,23,74,11,65,58};
    int n = 6; 
    int loops = 3;  // Chỉ thực hiện 3 lần lặp đầu tiên

    int minIndex, temp;
    for(int i = 0; i < loops; i++){  // Chỉ lặp 3 lần đầu tiên
        minIndex = i; 
        
        for(int j = i+1; j < n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }
        
        if(minIndex != i){
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
    
    printf("Kết quả sau 3 lần lặp đầu tiên: ");
    for(int i = 0; i < n; i++){  
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}