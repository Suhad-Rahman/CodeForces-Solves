#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n, m, l, r, loop;
        scanf("%d %d %d %d", &n, &m, &l, &r);
        
        loop=n-m;

        
        for(int i=0; i<loop; i++){
            
            if(abs(l)>abs(r)){
                        l++;
                }
                
            else if(abs(l)<abs(r)){
                    r--;
                }

            else{
                    if(i%2!=0){
                        if(l<0){
                        l++;
                    }
                    
                    }
                    else{
                        r--;
                    }
            }
        }
            
            printf("%d %d\n", l, r);
    }
    
    return 0;
}