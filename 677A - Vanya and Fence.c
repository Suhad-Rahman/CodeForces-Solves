#include<stdio.h>
int main(){
int n, hf, i, sum=0;;
scanf("%d %d", &n, &hf);
int h[n];
for(i=0; i<n; i++){
    scanf("%d", &h[i]);
    if(h[i]>hf){
        sum+=2;
    }
    else{
        sum+=1;
    }
}
printf("%d", sum);

return 0;
}
