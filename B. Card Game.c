#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int a1, a2, b1, b2, win=0;
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        int s=0, sl=0;

            if(a1>b1){
                s++;
            }
            if(a2>b2){
                s++;
            }
            
            if(b1>a1){
                sl++;
                
            }
            if(b2>a2){
                sl++;
            }
            
            if(s>sl){
                win+=2;
            }
            
            s=0;
            sl=0;
            
            if(a1>b2){
                s++;
            }
            if(a2>b1){
                s++;
            }
            
            if(b2>a1){
                sl++;
                
            }
            if(b1>a2){
                sl++;
            }
            
            if(s>sl){
                win+=2;
            }
        
        printf("%d\n", win);
        

        
    }
    
    
    
    return 0;
}