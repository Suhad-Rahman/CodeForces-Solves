#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        char s[6];
        int a=0,b=0;
        
        scanf("%5s", s);
        
        for(int i=0; i<5; i++){
            if(s[i]=='A'){
                a++;
            }
            else{
                b++;
            }
        }
        
        if(a>b){
            printf("A\n");
        }
        else{
            printf("B\n");
        }
    }
    
    
    return 0;
}