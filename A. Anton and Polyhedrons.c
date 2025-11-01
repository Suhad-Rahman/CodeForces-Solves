#include<stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    char str[13];
    int sum=0;
    
    for(int i=0; i<n; i++) {
        scanf("%s", str);
    
        if(str[0]=='T'){
            sum+=4;
        }
        
        else if(str[0]=='C') {
            sum+=6;
        }
        
        else if(str[0]=='O'){
            sum +=8;
        }
        
        else if(str[0]=='D') {
            sum +=12;
        }
        
        else if(str[0] == 'I') {
            sum +=20;
        }
        
    }
    
    printf("%d", sum);
    
    
    
    return 0;
}