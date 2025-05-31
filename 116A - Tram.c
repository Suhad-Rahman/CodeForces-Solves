#include<stdio.h>
int main(){

int n, entry, exit, i, sum=0, cap=0;

scanf("%d", &n);

for(i=0; i<n; i++){
    scanf("%d %d", &exit, &entry);
    sum-=exit;
    sum+=entry;
    if(cap<sum){
        cap=sum;
    }
}
printf("%d", cap);
return 0;
}
