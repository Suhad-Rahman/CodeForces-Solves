#include<stdio.h>

#define N 1001

int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        
        char s[N];
        int n, k;
        
        scanf("%d %d", &n, &k);
        scanf("%s", s);
        
        int last= -k, res=0;
        
        for(int i=0; i<n; i++){
            
            if(s[i]=='1'){
                
                if(i-last>=k){
                    res++;
                }
                
                last=i;
            }
            
        }
        
        printf("%d\n", res);
        
        
    }
    
    
    return 0;
}