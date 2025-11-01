#include<stdio.h>

int main () {
    
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    int max=0;
    int max_index=0;
    int min=101;
    int min_index=0;
    
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i]>max) {
            max=arr[i];
            max_index = i;
        }
        
        if(arr[i]<=min) {
            min = arr[i];
            min_index = i;
        }
        
    }
    
    
    int back_swap = (n-1) - min_index;
    
    int total_swap = max_index + back_swap;
    
    if(max_index > min_index) {
        total_swap = total_swap - 1;
    }
    
    printf("%d", total_swap);
    
    return 0;
}