#include<stdio.h>

int main() {
    
    int t;
    
    scanf("%d", &t);
    
    while(t--) {
        int n, temp;
        int arr[100];
        
        scanf("%d", &n);
        
        
        for(int i=0; i<n; i++) {
            
            scanf("%d", &arr[i]);
            
        }
        
        for(int i=0; i<n-1; i++){
            for(int j=i; j<n; j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        
       int mex=0;
       
       for(int i=0; i<n; i++){
           if(arr[i]==mex){
               mex++;
           }
           else if(arr[i]>mex){
               break;
           }
       }
            
    
    
    printf("%d\n", mex);
    
    }
    
    return 0;
}