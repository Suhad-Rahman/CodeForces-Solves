#include<stdio.h>
int main(){
    
    int t;
    
    scanf("%d", &t);
    
    while(t--){
        int n, count=0, r;
        scanf("%d", &n);
        
        int a[n];
        
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        
        for(int i=0; i<n; i++){
            count=0;
            for(int j=i; j<n; j++){
                if(a[i]==a[j]){
                    count++;
                    if(count==3){
                        r=i;
                        break;
                    }
                }
            }
            if(count==3){
                        break;
            }
        }
        
        if(count==3){
            printf("%d\n", a[r]);
        }
        else{
            printf("-1\n");
        }
        
        
    }
    
    
    return 0;
}