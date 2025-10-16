#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int arr[6], sum1=0, sum2=0;
        
        for(int i=0; i<3; i++){
            scanf("%1d", &arr[i]);
            sum1+=arr[i];
        }
        
        for(int i=3; i<6; i++){
            scanf("%1d", &arr[i]);
            sum2+=arr[i];
        }
        
        
        if(sum1 == sum2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}