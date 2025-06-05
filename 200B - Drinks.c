#include<stdio.h>
int main(){
    int i, drink;
    float n, sum=0.00;
    scanf("%f", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &drink);
        sum+=drink;
    }
    printf("%.12f", sum/n);
    
    return 0;
}