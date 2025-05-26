#include<stdio.h>
int main(){
int k, n, w, sum=0, i;
scanf("%d %d %d", &k, &n, &w);
for(i=1; i<=w; i++){
    sum+=(i*k);
}
if(n-sum<0){
printf("%d", sum-n);
}
else{
    printf("0");
}
return 0;
}
