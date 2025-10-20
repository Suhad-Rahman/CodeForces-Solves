#include<stdio.h>

int main () {
    
    unsigned long long int n,k, mid, pos;
    
    scanf("%llu %llu", &n, &k);
    
    mid = (n+1)/2;
    
    if(k<=mid){
        printf("%llu", (2*k)-1);
    }
    
    else{
        pos = k - mid; 
        printf("%llu", 2*pos);
    }
    
    
    
    return 0;
}