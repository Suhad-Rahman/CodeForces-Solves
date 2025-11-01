#include<stdio.h>
#include<string.h>


int main(){
    
    char p [101];
    
    scanf("%s", p);
    
    int flag=0, len = strlen(p);
    
    for(int i=0; i<=len; i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            printf("YES\n");
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        printf("NO\n");
    }
    
    return 0;
}