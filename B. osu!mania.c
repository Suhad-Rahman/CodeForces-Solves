#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        
        char a[n][5];
        int result[n], k=0;
        
        for(int i=0; i<n; i++){

                scanf("%4s", a[i]);
        }
        
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<4; j++){
                if(a[i][j]=='#'){
                    result[k]=j+1;
                    k++;
                    break;
                }

            }
        }
        
        for(int i=0; i<n; i++){
            printf("%d ", result[i]);
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}