#include<stdio.h>

int main() {
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        
        int n, hao_eats;
        scanf("%d", &n);
        
        hao_eats = (n-1)/2;
        
        printf("%d\n", hao_eats);
        
    }
    
    
    
    
    return 0;
}