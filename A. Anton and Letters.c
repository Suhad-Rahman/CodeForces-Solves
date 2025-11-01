#include<stdio.h>
#include<string.h>

int main() {
    
    char s[3005];
    int count=0;
    
    fgets(s, sizeof(s), stdin);
    
    int len = strlen(s);
    
    int freq[26]={0};
    
    
    for(int i=0; i<len; i++) {
        if((s[i]>='a' && s[i]<='z') && freq[s[i]-'a']==0) {
            count++;
            freq[s[i]-'a'] = 1;
        }
    }
    
    printf("%d", count);
    
    return 0;
}