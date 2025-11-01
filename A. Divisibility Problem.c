#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--){
    
    int a,b, rem;
    
    scanf("%d %d", &a, &b);
    
    if(a%b==0){
        printf("0\n");
    }
    
    else{
        rem = a % b;
        printf("%d\n", b-rem);
    }
    
    
    }
    
    return 0;
}