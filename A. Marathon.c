#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int a,b,c,d, count=0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        if(b>a){
            count++;
        }
        if(c>a){
            count++;
        }
        if(d>a){
            count++;
        }
        
        printf("%d\n", count);
        
    }
    
    return 0;
}