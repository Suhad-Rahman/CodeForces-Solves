#include<stdio.h>

int main() {
    
    int t, flag;
    scanf("%d", &t);
    
    while(t--) {
        
        flag=1;
        
        int n, k;
        scanf("%d", &n);
        scanf("%d", &k);
        
        
        int arr[n];
        
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            
        }
        
        for(int i=0; i<n; i++){
            
            if(i>0 && arr[i-1]>arr[i]){
                flag=0;                     //if the array is already sorted
                break;
            }
        }
        
        
        if((flag==1 && k==1) || k>=2){
            printf("YES\n");
        }
        
        else{
            printf("NO\n");
        }
        
    }
    
    
    
    return 0;
}