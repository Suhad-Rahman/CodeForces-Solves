#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        char str[101];
        int flag=0, len;
        scanf("%s", str);
        
        len= strlen(str);
        
        for(int i=0; i<strlen(str); i++){
            if(str[i]==str[i+1]){
               flag=1;
            }
        }
        if(flag==1){
            printf("1\n");
        }
        else{
            printf("%d\n", len);
        }
        
    }
    
    
    
    return 0;
}