#include<stdio.h>
int main(){
    int t, n, m, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d %d %d", &n, &m, &x, &y);
        
        for(int i=0; i<n;i++){
            int a;
            scanf("%d", &a);
        }
        for(int i=0; i<m;i++){
            int b;
            scanf("%d", &b);
        }
            printf("%d\n", n+m);
    }
    
    
    return 0;
}