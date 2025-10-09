#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        char str[11];
        scanf("%s", str);
        
        str[strlen(str)-1]='\0';
        str[strlen(str)-1]='i';
        
        printf("%s\n", str);
    
    }
    
    
    return 0;
}