#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int a, sum=0, rem;
        scanf("%d", &a);
        
        for(int i=0; i<2; i++){
            rem=a%10;
            sum=sum+rem;
            a=a/10;
        }
        printf("%d\n", sum);
    }
    
    return 0;
}