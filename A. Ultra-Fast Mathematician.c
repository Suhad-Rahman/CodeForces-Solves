    //  https://codeforces.com/problemset/problem/61/A


#include<stdio.h>
#include<string.h>

int main() {
    
    char s1 [101];
    char s2 [101];
    char ans[101];
    
    scanf("%s", s1);
    scanf("%s", s2);
    
    int len = strlen(s1);
    
    for(int i=0; i<=len-1; i++){
        if(s1[i]!=s2[i]){
            ans[i]='1';
        }
        
        else{
            ans[i]='0';
        }
    }
    
    ans[len]='\0';
    
    printf("%s", ans);
    
    
    
    
    return 0;
}