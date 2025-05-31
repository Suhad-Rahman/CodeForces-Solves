#include<stdio.h>
int main(){
int n, i, x, flag=0;
scanf("%d", &n);

for(i=0; i<n; i++){
    scanf("%d", &x);
    if(x==1){
        flag=1;
        printf("HARD");
        break;
    }
}
if(flag==0){
    printf("EASY");
}
return 0;
}
