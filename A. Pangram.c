#include<stdio.h>
#include<string.h>

int main() {
    
    int n, index, flag=1;
    scanf("%d", &n);
    
    char s[101];
    
    scanf("%100s", &s);
    
    int len= strlen(s);
    
    int freq[27]= {0};
    
    for(int i=0; i<len; i++){
        char ch = s[i];
            
            ch= tolower(ch);
            
            index= ch-'a';
            
            freq[index]++;
    }
    
    for(int i=0; i<26; i++){
        if(freq[i]==0){
            flag=0;
            break;
        }
    }
    
    
    if(flag==0){
        printf("NO");
    }
    
    else{
        printf("YES");
    }
    
    
    return 0;
}