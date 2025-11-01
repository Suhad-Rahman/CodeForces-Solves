#include<stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int arr[] = {100, 20, 10, 5, 1};
    
    int total_count=0;
    
    for(int i=0; i<5; i++) {
        
        int count = n/arr[i];
        
        total_count += count;
        
        n = n % arr[i];
        
        if(n==0){
            break;
        }
        
    }
    
    printf("%d", total_count);
    
    
    return 0;
}