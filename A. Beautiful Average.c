#include<stdio.h>
int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        
        int n;
        scanf("%d", &n);
        
        int current, max=0;
        for(int i=0; i<n; i++){
            scanf("%d", &current);
            
            if(current > max){
                max=current;
            }
            
        }
       

        
        printf("%d\n", max);
        
        
        
    }
    
    
    return 0;
}