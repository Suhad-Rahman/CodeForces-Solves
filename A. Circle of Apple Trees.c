#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n, temp, count=1;
        scanf("%d", &n);
        
        int arr[n];
        
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        
        for(int i=0; i<n;i++){
            for(int j=i; j<n; j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        
        for(int i=0; i<n-1;i++){
                if(arr[i]!=arr[i+1]){
                    count++;
                }
                else{
                    continue;
                }
        }
        
        printf("%d\n", count);
        
        
    }
    
    
    
    return 0;
}