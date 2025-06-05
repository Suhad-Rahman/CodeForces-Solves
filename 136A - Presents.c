#include<stdio.h>
int main(){
    int n, pi, i;
    scanf("%d", &n);
    
    int arr[n+1];
    for(i=1; i<=n; i++){
        scanf("%d", &pi);
        arr[pi]=i;
    }
    for(i=1; i<=n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}