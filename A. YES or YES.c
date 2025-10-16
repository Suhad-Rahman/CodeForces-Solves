#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
        char s[4];
        scanf("%3s", s);
        
        if((s[0]=='y' || s[0]=='Y') && (s[1]=='e' || s[1]=='E') && (s[2]=='s'||s[2]=='S')){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}