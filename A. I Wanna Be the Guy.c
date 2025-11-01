#include<stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int win[n+1];
    
    for(int i=1; i<=n; i++){
        win[i]=0;
    }
    
    int p;
    scanf("%d", &p);
    
    int x[p];
    
    for(int i=0; i<p; i++){
        scanf("%d", &x[i]);
        
        if(x[i]>=1 && x[i]<=100){
            win[x[i]] = 1;
        }
    }
    
    
    int q;
    scanf("%d", &q);
    
    int y[q];
    
    
    for(int i=0; i<q; i++){
        scanf("%d", &y[i]);
        
        if(y[i]>=1 && y[i]<=n){
            win[y[i]] = 1;
        }
    }
    
    int flag=1;
    
    for(int i=1; i<=n; i++){
        if(win[i]==0){
            flag=0;
            break;
        }
    }
    
    if(flag==1) {
        printf("I become the guy.");
    }
    
    else{
        printf("Oh, my keyboard!");
    }
    
    
    
    
    
    return 0;
}