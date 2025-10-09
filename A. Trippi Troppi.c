#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        char a[11], b[11], c[11];
        scanf("%s %s %s", a, b, c);
        
        printf("%c%c%c\n", a[0], b[0], c[0]);
    }
    
    
    return 0;
}