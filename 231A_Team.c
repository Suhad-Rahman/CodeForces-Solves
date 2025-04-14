#include<stdio.h>
int main(){
int n, x, y, z, sum=0;
scanf("%d", &n);
for(int i=1;i<=n;i++){
        scanf("%d %d %d", &x, &y, &z);
    if(x+y+z>=2){
        sum++;
    }
}
printf("%d", sum);
return 0;
}
