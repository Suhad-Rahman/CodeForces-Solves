#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
        char a[4], b[4];
        scanf("%3s %3s", a,b);
        char temp;
        
        temp=a[0];
        a[0]=b[0];
        b[0]=temp;
        
        printf("%s %s\n", a,b);
    }
    
    
    return 0;
}