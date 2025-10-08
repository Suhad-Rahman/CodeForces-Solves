#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        int x,n;
        scanf("%d %d", &x, &n);
        
        if(n%2==0){
            printf("%d\n", x-x);
        }
        else{
            printf("%d\n", x);
        }
        
    }
    
    
    
    return 0;
}