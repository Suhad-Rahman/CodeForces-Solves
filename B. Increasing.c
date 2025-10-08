#include<stdio.h>
int main(){
    int t, flag;
    scanf("%d", &t);
    
    while(t--){
        flag=1;
        int n;
        scanf("%d", &n);
        
        
        int a[n];
        for(int i=0; i<n;i++){
            scanf("%d", &a[i]);
        }
        
        if(n==1){
            printf("YES\n");
        }
        
        else{
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                flag=0;
                break;
            }
            else{
                continue;
                }
            }

        }
        
        if(flag==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
        }
        
    }

    return 0;
    
}