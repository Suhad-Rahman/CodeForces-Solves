#include<stdio.h>
#include<string.h>

int main() {
    
    int t;
    scanf("%d", &t);
    
    while(t--) {
        
        int flag=1;
        
        int n;
        scanf("%d", &n);
        
        char str[22];
        char name[22];
        
        scanf("%s", str);
        scanf("%s", name);
        
        int freq_1[26]= {0};
        int freq_2[26]= {0};
        
        for(int i=0; i<n; i++) {
            
            freq_1[str[i]-'a']++;
            freq_2[name[i]-'a']++;
        }
        
        for(int i=0; i<26; i++) {
            if(freq_1[i]!=freq_2[i]){
                flag=0;
                break;
            }
        }
        
        if(flag==1) {
            printf("YES\n");
        }
        
        else{
            printf("NO\n");
        }
        
        
    }
    
    
    
    return 0;
}