#include<stdio.h>
int main(){
int n, k_th, i, a[50], eligible, Contestant=0;
scanf("%d %d", &n, &k_th);

for(i=1; i<=n; i++){
scanf("%d", &a[i]);
}
eligible=a[k_th];

for(i=1; i<=n; i++){
    if(0<a[i] && a[i]>=eligible){
    Contestant++;
}
}
printf("%d", Contestant);
return 0;
}
