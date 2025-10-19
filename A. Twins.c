#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int a[n], sum=0, clone, mysum=0, coin=0;
    
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(a[i]<a[j]){
                clone=a[i];
                a[i]=a[j];
                a[j]=clone;
            }
        }
    }
    
    for(int k=0; k<n; k++){
        coin++;
        mysum+=a[k];
        sum-=a[k];
        if(mysum>sum){
            break;
        }
    }
    
    printf("%d\n", coin);
    
    
    
    return 0;
}